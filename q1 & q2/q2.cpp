#include<bits/stdc++.h>
#include "gift_dist.h"
#include "couple.h"
#include "gifts.h"

using namespace std;
bool cmp1(couple &c1 , couple &c2){
  return c1.get_happiness() > c2.get_happiness();
}
bool cmp2(couple &c1 , couple &c2){
    return c1.get_compatibility() > c2.get_compatibility();
}
int main(){

        vector< gifts> gif;
        vector< couple > cp;

        dist_2(gif,cp);

        vector<couple> :: iterator it,it1,it2,it3;
        /*for(it = cp.begin();it != cp.end() ; it++)
        {
            cout << it->get_boy_name()<< " " << it->get_girl_name() << " " << it->get_happiness()<< " " << it->get_compatibility() << endl;


        }*/
        int k;
        cout << "k = 5"<<endl;

        k = 5;
        sort(cp.begin(),cp.end(),cmp1);
        int i = k;
        cout<<" k ---- happy "<<endl;
        for(it = cp.begin();it != cp.end() && i>0 ; it++)
        {
            i--;
            cout << it->get_boy_name()<< " " << it->get_girl_name() << " " << it->get_happiness()<< " " << it->get_compatibility() << endl;


        }
        sort(cp.begin(),cp.end(),cmp2);
        cout<< " k ----  compatible"<<endl;
        i = k;
        for(it = cp.begin();it != cp.end() && i>0 ; it++)
        {
            i--;
            cout << it->get_boy_name()<< " " << it->get_girl_name() << " " << it->get_happiness()<< " " << it->get_compatibility() << endl;


        }




}
