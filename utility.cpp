#include<bits/stdc++.h>
#include "utility.h"
using namespace std;

int maxxa(int a,int b,int c){
   return max(max(a,b),c);
}
void scan(vector<miser> (*b1) ,vector<generous> (*b2),vector<geek> (*b3),vector<choosy> (*g1) ,vector<normal> (*g2),vector <desperate> (*g3)){



    freopen( "boys.txt" , "r" ,stdin);

	while(1)
	{
	    //cout<<"XYZ"<<endl;
		std::string name;
		std::string ignore;
		int attract;
		int intelli;
		int budget;
		int min_attr_req;
		int type;

		cin >> name >> attract  >> intelli  >> budget  >> min_attr_req  >> type ;
		//cout<< name <<" " << attract <<" "<< intelli <<" "<< budget<<" "<< min_attr_req <<" "<< type<<endl;
        if(name == "***")
            break;
		switch(type)
		{
			case 1:
			{
				miser m(name, attract, intelli, budget, min_attr_req);
				(*b1).push_back(m);
				break;
			}
			case 2:
			{
				generous gee1(name, attract, intelli, budget, min_attr_req);
				(*b2).push_back(gee1);
				break;
			}
			case 3:

			{
				geek gee2(name, attract, intelli, budget, min_attr_req);
				(*b3).push_back(gee2);
				break;
			}
			default:
				exit(0);
		}
	}
	//cout<<(*b1).size();
	//fclose(stdin);
	//cout<<"ABC"<<endl;

	std :: ifstream gi ( "girls.txt" ) ;
	while(1)
	{
		std::string name;
		std::string ignore;
		int attract;
		int intelli;
		int budget;
		//int min_attr_req;
		int type;
		int preference;
		gi >> name >> attract >>  intelli >> budget >> preference >> type ;
        //cout<< name <<" " << attract <<" "<< intelli <<" "<< budget<<" "<<preference<<" " << type<< endl;


		if(name == "***")
            break;
		switch(type)
		{
			case 1:
			{
				choosy c(name, attract, intelli, budget, preference);
				(*g1).push_back(c);
				break;
			}
			case 2:
			{
				normal n(name, attract, intelli, budget, preference);
				(*g2).push_back(n);
				break;
			}
			case 3:
			{
				desperate d(name, attract, intelli, budget, preference);
				(*g3).push_back(d);
				break;
			}
			default:
				exit(0);
		}
	}
	gi.close();

	//fclose(stdin);
	//cout<<"CBA"<<endl;
}

void coupling(std::vector<miser> &mb, std::vector<generous> &genb, std::vector<geek> &gb, std::vector<choosy> &gc,
                             std::vector<normal> &gn, std::vector<desperate> &gd,vector< pair<string,string> > &couples,vector< pair<int,int> > &couples_type){
{
    ifstream input;
    input.open("girls.txt", std::ios::in);
    ofstream out;
    out.open("log1.txt" , std::ios::out);


     while(!input.eof()) {
        string name;
        string ign;
        int attract;
        int intelli;
        int budget;
        int type;
        int pre;
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
        int ma = 0;
        int mbud = 0;
        int mint = 0;
        int t = 0;
        //std::cout<<"hello\n";
        for(it1 = mb.begin(); it1 != mb.end(); it1++) {
            if(it1->get_budget() > budget && it1->get_status() == 0) {
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
        //std::cout<<"hello\n";
        for(it2 = gb.begin(); it2 != gb.end(); it2++) {
             if(it2->get_budget() > budget && it2->get_status() == 0) {
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
        for(it3 = genb.begin(); it3 != genb.end(); it3++) {
             if(it3->get_budget() > budget && it3->get_status() == 0) {
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
        //std::cout << temp2->get_name();
        //std::cout<<"hello\n";
        //std::cout << temp3->get_name();
            if(t == 1) {
                temp1->set_status(1);

                //std::cout<<"hello1\n";
                std::cout << name <<" with " << temp1->get_name() << std::endl;
                out << name <<" with " << temp1->get_name() << std::endl;
                couples.push_back(make_pair(temp1->get_name(),name));

                couples_type.push_back(make_pair(t,type));
            }
            else if(t == 2) {
                //std::cout<<"hello2\n";
                temp3->set_status(1);
                std::cout << name <<" with " << temp3->get_name() << std::endl;
                out << name <<" with " << temp1->get_name() << std::endl;
                couples.push_back(make_pair(temp3->get_name(),name));
                couples_type.push_back(make_pair(t,type));
            }
            else if(t == 3) {
                //std::cout<<"hello3\n";
                temp2->set_status(1);
                //std::cout<<temp3->get_name();
                std::cout << name <<" with " << temp2->get_name() << std::endl;
                couples.push_back(make_pair(temp2->get_name(),name));
                out << name <<" with " << temp1->get_name() << std::endl;
                couples_type.push_back(make_pair(t,type));
                //std::cout<<"hello3\n";
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




}


