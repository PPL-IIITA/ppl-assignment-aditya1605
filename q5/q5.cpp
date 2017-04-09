#include<bits/stdc++.h>
#include "miser.h"
#include "generous.h"
#include "geek.h"
#include "choosy.h"

#include "normal.h"
#include "desperate.h"
#include "utility.h"

using namespace std;

bool cmp1(miser &c1 , miser &c2){
    return c1.get_attractiveness() < c2.get_attractiveness();
}
bool cmp2(generous &c1 , generous &c2){
    return c1.get_attractiveness() < c2.get_attractiveness();
}
bool cmp3(geek &c1 , geek &c2){
    return c1.get_attractiveness() < c2.get_attractiveness();
}
bool cmp4(choosy &c1 , choosy &c2){
    return c1.get_maintanence() < c2.get_maintanence();
}
bool cmp5(normal &c1 , normal &c2){
    return c1.get_maintanence() < c2.get_maintanence();
}
bool cmp6(desperate &c1 ,desperate  &c2){
    return c1.get_maintanence() < c2.get_maintanence();
}

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
    sort(b1.begin(),b1.end(),cmp1);
    sort(b2.begin(),b2.end(),cmp2);
    sort(b3.begin(),b3.end(),cmp3);
    sort(g1.begin(),g1.end(),cmp4);
    sort(g2.begin(),g2.end(),cmp5);
    sort(g3.begin(),g3.end(),cmp6);

    coupling_3(b1,b2,b3,g1,g2,g3);



}
