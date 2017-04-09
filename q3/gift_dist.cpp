#include "gift_dist.h"
#include<bits/stdc++.h>
#include "gifts.h"
#include "couple.h"
using namespace std;

void dist_2(vector< gifts > &gif , vector<couple> &cp){

  ifstream ifs;
  ifs.open("gifts.txt",std::ios::in);

  while( !ifs.eof()){
    string name;
    string temp;
    int price;
    int value;
    int att_1;
    int att_2;
    int type;

    ifs >> name >> price >> value >>  att_1 >>  att_2 >> type;
    if(name == "***")
        break;
    //cout << name<< endl;
    gifts g(name,price,value,att_1,att_2,type);

    gif.push_back(g);

  }

  ifs.close();

  ifs.open("couples.txt",std::ios::in);
  ofstream out;
  out.open("log2.txt",std::ios::out);
  while( !ifs.eof()){
    //cout << "aa" << endl;
    string b_name;
    string g_name;
    string temp;
    int bud;
    int main;
    int attract1;
    int attract2;
    int intelli1;
    int intelli2;
    int g_type;
    int boy_happy = 0;
    int girl_happy = 0;
    int comp = 0;
    int happy = 0;
    int b_type;

    ifs >> g_name >> b_name >> bud >> main >> attract1 >> attract2 >> intelli1 >> intelli2 >> b_type >>  g_type;
    //cout << b_name << g_name << bud << endl;


    if(b_name == "***")
        break;

    cout << b_name << " gifts " << g_name << endl;
    out << b_name << " gifts " << g_name << endl;
    int sum = 0;
    int value_sum = 0;
    int lux_sum = 0;
    vector <gifts> :: iterator it;
    int index = 1;
    int lol = main;
    for( it = gif.begin();it!= gif.end();it++){
        if(lol <= 0)
            break;

        sum += it->get_price();
        if(it->get_type() != 2)
           value_sum += it->get_value();
        else
           lux_sum = it->get_value();
        cout << index << " , " << it->get_name()<<endl;
        out << index << " ) " << it->get_name()<<endl;
        it->set_alloc_status(1);
        lol -= it->get_price();
        index ++ ;

    }
     //cout << "bb" << endl;
    if(g_type == 1 ){

        girl_happy = log(value_sum + 2*lux_sum);

    }
    else if ( g_type == 2){
        girl_happy = sum + lux_sum + value_sum;


    }
    else{
        girl_happy = pow((value_sum+lux_sum),2);

    }
    if(b_type == 1){
        boy_happy = bud - lol ;

    }
    else if (b_type == 2){
        boy_happy = girl_happy;
    }
    else if ( b_type == 3)
    {
        boy_happy = intelli2;

    }
    happy = boy_happy + girl_happy;
    comp = abs(attract1 - attract2) + abs(intelli1 - intelli2) + abs(bud - main);
    couple c1(b_name,g_name,happy,comp);

    cp.push_back(c1);
    //cout << "cc" << endl;

  }
  ifs.close();




}
void dist(vector< gifts > &gif , vector<couple> &cp){

  ifstream ifs;
  ifs.open("gifts.txt",std::ios::in);

  while( !ifs.eof()){
    string name;
    string temp;
    int price;
    int value;
    int att_1;
    int att_2;
    int type;

    ifs >> name >> price >> value >>  att_1 >>  att_2 >> type;
    if(name == "***")
        break;
    //cout << name<< endl;
    gifts g(name,price,value,att_1,att_2,type);

    gif.push_back(g);

  }

  ifs.close();

  ifs.open("couples.txt",std::ios::in);
  ofstream out;
  out.open("log2.txt",std::ios::out);
  while( !ifs.eof()){
    //cout << "aa" << endl;
    string b_name;
    string g_name;
    string temp;
    int bud;
    int main;
    int attract1;
    int attract2;
    int intelli1;
    int intelli2;
    int g_type;
    int boy_happy = 0;
    int girl_happy = 0;
    int comp = 0;
    int happy = 0;
    int b_type;

    ifs >> g_name >> b_name >> bud >> main >> attract1 >> attract2 >> intelli1 >> intelli2 >> b_type >>  g_type;
    //cout << b_name << g_name << bud << endl;


    if(b_name == "***")
        break;

    //cout << b_name << " gifts " << g_name << endl;
    out << b_name << " gifts " << g_name << endl;
    int sum = 0;
    int value_sum = 0;
    int lux_sum = 0;
    vector <gifts> :: iterator it;
    int index = 1;
    int lol = main;


    for( it = gif.begin();it!= gif.end();it++){
        if(lol <= 0)
            break;

        sum += it->get_price();
        if(it->get_type() != 2)
           value_sum += it->get_value();
        else
           lux_sum += it->get_value();
        //cout << index << " , " << it->get_name()<<endl;
        out << index << " , " << it->get_name()<<endl;
        it->set_alloc_status(1);
        lol -= it->get_price();
        index ++ ;

    }
     //cout << "bb" << endl;
    if(g_type == 1 ){

        girl_happy = log(value_sum + 2*lux_sum);

    }
    else if ( g_type == 2){
        girl_happy = sum + lux_sum + value_sum;


    }
    else{
        girl_happy = pow((value_sum+lux_sum),2);

    }
    if(b_type == 1){
        boy_happy = bud - lol ;

    }
    else if (b_type == 2){
        boy_happy = girl_happy;
    }
    else if ( b_type == 3)
    {
        boy_happy = intelli2;

    }
    happy = boy_happy + girl_happy;
    comp = abs(attract1 - attract2) + abs(intelli1 - intelli2) + abs(bud - main);
    couple c1(b_name,g_name,happy,comp);

    cp.push_back(c1);
    //cout << "cc" << endl;

  }
  ifs.close();




}

