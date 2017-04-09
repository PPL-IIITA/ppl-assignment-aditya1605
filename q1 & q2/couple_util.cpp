#include<bits/stdc++.h>
#include "couple_util.h"

void scan_couple(vector< pair<string,string> > *c,vector<miser> *b1 ,vector<generous> *b2,vector<geek> *b3,vector<choosy> *g1 ,vector<normal> *g2,vector <desperate> *g3){
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



    ifstream ifs;
     ifs.open("couples.txt",std::ios::in);

    while( !ifs.eof()){
    //cout << "aa" << endl;

    ifs >> g_name >> b_name >> bud >> main >> attract1 >> attract2 >> intelli1 >> intelli2 >> b_type >>  g_type;
    //cout << b_name << g_name << bud << endl;


    if(b_name == "***")
        break;

    switch(b_type)
		{
			case 1:
			{
				miser m(b_name, attract1, intelli1, bud, attract2);
				(*b1).push_back(m);
				break;
			}
			case 2:
			{
				generous gee1(b_name, attract1, intelli1, bud, attract2);
				(*b2).push_back(gee1);
				break;
			}
			case 3:

			{
				geek gee2(b_name, attract1, intelli1, bud, attract2);
				(*b3).push_back(gee2);
				break;
			}

		}
    switch(g_type)
		{
			case 1:
			{
				choosy c(g_name, attract2, intelli2, bud,b_type);
				(*g1).push_back(c);
				break;
			}
			case 2:
			{
				normal n(g_name, attract2, intelli2, bud,b_type);
				(*g2).push_back(n);
				break;
			}
			case 3:
			{
				desperate d(g_name, attract2, intelli2, bud,b_type);
				(*g3).push_back(d);
				break;
			}

		}
        (*c).push_back(make_pair(b_name,g_name));

}
ifs.close();

}
void coupling_2(vector<couple> &c,vector<miser> &mb ,vector<generous> &genb,vector<geek> &gb,vector<choosy> &gc ,vector<normal> &gn,vector <desperate> &gd,int k){

    ifstream input;
    input.open("girls.txt", std::ios::in);
    ofstream out;
    out.open("log3.txt" , std::ios::out);


     while(!input.eof() && k--) {
         //cout << k << endl;


        string name;
        string ign;
        int attract;
        int intelli;
        int budget;
        int type;
        int pre;
        string b_name;
        input >> name >> attract >> intelli >> budget >> type >> pre;
        //cout<<name<<endl;
        if(name == "***")
            break;
        vector<miser>::iterator it1;
        vector<geek>::iterator it2;
        vector<generous>::iterator it3;
        vector<miser>::iterator temp1;
        vector<geek>::iterator temp2;
        vector<generous>::iterator temp3;
        //cout << "aa\n";
        vector<couple> :: iterator itc;
        for(itc = c.begin() ; itc  != c.end() ;itc++){
            if(itc->get_girl_name() == name){
                b_name = itc->get_boy_name();
            }
        }
        //cout <<"b_name ="<< b_name<<endl;
        int ma = 0;
        int mbud = 0;
        int mint = 0;
        int t = 0;
        //std::cout<<"hello\n";
        for(it1 = mb.begin(); it1 != mb.end(); it1++) {
            if(it1->get_budget() > budget && it1->get_status() == 0 && it1->get_name() != b_name) {
                //cout << "1\n";
                if(pre == 2 && it1->get_budget() > mbud) {
                        mbud = it1->get_budget();
                        temp1 = it1;
                        t = 1;
                }
                else if(pre == 1 && it1->get_attractiveness() > ma) {
                    ma = it1->get_attractiveness();
                    temp1 = it1;
                    t = 1;
                }
                else if(pre == 3 && it1->get_intelligence() > mint) {
                    mint = it1->get_intelligence();
                    temp1 = it1;
                    t = 1;
                }
            }
        }
        //cout << "cc\n";
        //std::cout<<"hello\n";
        for(it2 = gb.begin(); it2 != gb.end(); it2++) {
             if(it2->get_budget() > budget && it2->get_status() == 0 && it2->get_name() != b_name ) {
                //cout << "2\n";
                if(pre == 2 && it2->get_budget() > mbud) {
                        mbud = it2->get_budget();
                        temp2 = it2;
                        t = 3;
                }
                else if(pre == 1 && it2->get_attractiveness() > ma) {
                    ma = it2->get_attractiveness();
                    temp2 = it2;
                    t = 3;
                }
                else if(pre == 3 && it2->get_intelligence() > mint) {
                    mint = it2->get_intelligence();
                    temp2 = it2;
                    t = 3;
                }
            }
        }
        //std::cout<<t <<std::endl;
        //cout << "cc\n";
        for(it3 = genb.begin(); it3 != genb.end(); it3++) {
             if(it3->get_budget() > budget && it3->get_status() == 0 && it3->get_name() != b_name) {

                if(pre == 2 && it3->get_budget() > mbud) {
                        mbud = it3->get_budget();
                        temp3 = it3;
                        t = 2;
                }
                else if(pre == 1 && it3->get_attractiveness() > ma) {
                    ma = it3->get_attractiveness();
                    temp3 = it3;
                    t = 2;
                }
                else if(pre == 3 && it3->get_intelligence() > mint) {
                    mint = it3->get_intelligence();
                    temp3 = it3;
                    t = 2;
                }
            }
        }
        //cout << "cc\n";
        //std::cout << temp2->get_name();
        //std::cout<<"hello\n";
        //std::cout << temp3->get_name();
            if(t == 1) {
                temp1->set_status(1);

                //std::cout<<"hello1\n";
                std::cout << name <<" with " << temp1->get_name() << std::endl;




            }
            else if(t == 2) {
                //std::cout<<"hello2\n";
                temp3->set_status(1);
                std::cout << name <<" with " << temp3->get_name() << std::endl;


            }
            else if(t == 3) {
                //std::cout<<"hello3\n";
                temp2->set_status(1);
                //std::cout<<temp3->get_name();
                std::cout << name <<" with " << temp2->get_name() << std::endl;



            }
            /*std::vector<choosy>::iterator ig1;
            std::vector<choosy>::iterator ig2;
            std::vector<choosy>::iterator ig3;
            if(t != 0) {
                for(ig1 = gc.begin(); ig1 != gc.end(); ig1++) {
                    if()
                }
            }*/
    }
}
void coupling_t(vector<couple> &c,vector<miser> &mb ,vector<generous> &genb,vector<geek> &gb,vector<choosy> &g1 ,vector<normal> &g2,vector <desperate> &g3,int t){

    ifstream input;
    input.open("girls.txt", std::ios::in);
    ofstream out;
    out.open("log3.txt" , std::ios::out);


     while(!input.eof()) {
         //cout << k << endl;


        string name;
        string ign;
        int attract;
        int intelli;
        int budget;
        int type;
        int pre;
        string b_name;
        input >> name >> attract >> intelli >> budget >> type >> pre;
        //cout<<name<<endl;
        if(name == "***")
            break;
        vector<miser>::iterator it1;
        vector<geek>::iterator it2;
        vector<generous>::iterator it3;
        vector<miser>::iterator temp1;
        vector<geek>::iterator temp2;
        vector<generous>::iterator temp3;
        //cout << "aa\n";
        vector<couple> :: iterator itc;
        for(itc = c.begin() ; itc  != c.end() ;itc++){
            if(itc->get_girl_name() == name){
                b_name = itc->get_boy_name();
                break;
            }
        }
        int happy = itc->get_happiness();
        if(happy > t)
            continue;


        //cout <<"b_name ="<< b_name<<endl;
        int ma = 0;
        int mbud = 0;
        int mint = 0;
        int t = 0;
        //std::cout<<"hello\n";
        for(it1 = mb.begin(); it1 != mb.end(); it1++) {
            if(it1->get_budget() > budget && it1->get_status() == 0 && it1->get_name() != b_name) {
                //cout << "1\n";
                if(pre == 2 && it1->get_budget() > mbud) {
                        mbud = it1->get_budget();
                        temp1 = it1;
                        t = 1;
                }
                else if(pre == 1 && it1->get_attractiveness() > ma) {
                    ma = it1->get_attractiveness();
                    temp1 = it1;
                    t = 1;
                }
                else if(pre == 3 && it1->get_intelligence() > mint) {
                    mint = it1->get_intelligence();
                    temp1 = it1;
                    t = 1;
                }
            }
        }
        //cout << "cc\n";
        //std::cout<<"hello\n";
        for(it2 = gb.begin(); it2 != gb.end(); it2++) {
             if(it2->get_budget() > budget && it2->get_status() == 0 && it2->get_name() != b_name ) {
                //cout << "2\n";
                if(pre == 2 && it2->get_budget() > mbud) {
                        mbud = it2->get_budget();
                        temp2 = it2;
                        t = 3;
                }
                else if(pre == 1 && it2->get_attractiveness() > ma) {
                    ma = it2->get_attractiveness();
                    temp2 = it2;
                    t = 3;
                }
                else if(pre == 3 && it2->get_intelligence() > mint) {
                    mint = it2->get_intelligence();
                    temp2 = it2;
                    t = 3;
                }
            }
        }
        //std::cout<<t <<std::endl;
        //cout << "cc\n";
        for(it3 = genb.begin(); it3 != genb.end(); it3++) {
             if(it3->get_budget() > budget && it3->get_status() == 0 && it3->get_name() != b_name) {

                if(pre == 2 && it3->get_budget() > mbud) {
                        mbud = it3->get_budget();
                        temp3 = it3;
                        t = 2;
                }
                else if(pre == 1 && it3->get_attractiveness() > ma) {
                    ma = it3->get_attractiveness();
                    temp3 = it3;
                    t = 2;
                }
                else if(pre == 3 && it3->get_intelligence() > mint) {
                    mint = it3->get_intelligence();
                    temp3 = it3;
                    t = 2;
                }
            }
        }
        //cout << "cc\n";
        //std::cout << temp2->get_name();
        //std::cout<<"hello\n";
        //std::cout << temp3->get_name();
            if(t == 1) {
                temp1->set_status(1);

                //std::cout<<"hello1\n";
                std::cout << name <<" with " << temp1->get_name() << std::endl;




            }
            else if(t == 2) {
                //std::cout<<"hello2\n";
                temp3->set_status(1);
                std::cout << name <<" with " << temp3->get_name() << std::endl;


            }
            else if(t == 3) {
                //std::cout<<"hello3\n";
                temp2->set_status(1);
                //std::cout<<temp3->get_name();
                std::cout << name <<" with " << temp2->get_name() << std::endl;



            }
            /*std::vector<choosy>::iterator ig1;
            std::vector<choosy>::iterator ig2;
            std::vector<choosy>::iterator ig3;
            if(t != 0) {
                for(ig1 = gc.begin(); ig1 != gc.end(); ig1++) {
                    if()
                }
            }*/
}
}
void find_girl_friend_1(vector<couple> &c,string b_name){
    vector<couple> ::iterator itc;
    string g_name;
    cout<< "implementation 1-------->\n";
    for(itc = c.begin();itc!= c.end();itc++){
        if(itc->get_boy_name() == b_name){
               cout <<itc->get_girl_name()<< " is girlfriend of " << b_name << endl;
               return;
        }
    }
    cout <<" no girlfriend found :( " << endl;


}













