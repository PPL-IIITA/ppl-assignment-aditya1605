#include<bits/stdc++.h>
#include "miser.h"
#include "generous.h"
#include "geek.h"
#include "choosy.h"

#include "normal.h"
#include "desperate.h"
#include "utility.h"

using namespace std;
int main(){
    vector<miser> b1;
    vector<generous> b2;
    vector<geek> b3;
    vector<choosy> g1;
    vector<normal> g2;
    vector<desperate> g3;

    //cout<<"a"<<endl;
    //cout<<"a"<<endl;
    //cout<<b1.size();
    scan(&b1,&b2,&b3,&g1,&g2,&g3);
    //cout<<b1.size();
    vector< pair<string,string> > couples;
    vector< pair<int,int> > couples_type;
    coupling(b1,b2,b3,g1,g2,g3,couples,couples_type);
    vector<miser> ::iterator it;
    vector<generous> :: iterator it2;
    vector<geek> :: iterator it3;
    vector< pair<string,string> > :: iterator it4;
    vector< pair<int,int> > :: iterator it5;
//    for(it = b1.begin();it != b1.end();it++){
//        cout << (*it).get_name()<<endl;
//    }
//    for(it2 = b2.begin();it2 != b2.end();it2++){
//        cout << (*it2).get_name()<<endl;
//    }
//
//    for(it3 = b3.begin();it3 != b3.end();it3++){
//        cout << (*it3).get_name()<<endl;
//    }
//        for(it5 = couples_type.begin();it5 != couples_type.end();it5++){
//            cout<< it5->first << " "<< it5->second<< endl;
//
        }







