#include<bits/stdc++.h>
#include "miser.h"
#include "generous.h"
#include "geek.h"
#include "choosy.h"

#include "normal.h"
#include "desperate.h"

#include "couple_util.h"
#include "gift_dist.h"
#include "couple.h"
#include "gifts.h"
using namespace std;
bool cmp1(couple &c1 , couple &c2){
    return c1.get_happiness() > c2.get_happiness();
}
int main(){
    vector<miser> b1;
    vector<generous> b2;
    vector<geek> b3;
    vector<choosy> g1;
    vector<normal> g2;
    vector<desperate> g3;
    vector< pair<string,string> > c;

    scan_couple(&c,&b1,&b2,&b3,&g1,&g2,&g3);


    vector< pair<string,string> > :: iterator itc;
    vector<miser> :: iterator it1;

    vector< gifts> gif;
    vector< couple > cp;
    vector< couple > ::iterator itc1;

    dist(gif,cp);
    for(itc1 = cp.begin();itc1 != cp.end();itc1++){
        cout << itc1->get_boy_name() <<" " << itc1->get_girl_name()<<endl;
    }
    int t;
    cout << "taking t = 50"<<endl;



    sort(cp.begin(),cp.end(),cmp1);

    cout << "newly formed couples ---------\n" << endl;
    coupling_t(cp,b1,b2,b3,g1,g2,g3,50);









}

