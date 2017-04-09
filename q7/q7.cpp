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
void bina_search(vector< pair<string,string> > c,string b_name);
void form_hash(int hash_t[],vector< pair<string,string> >c);
void find_hash(int hash_t[],string b_name);
int to_int(string name);
bool cmp1(couple &c1 , couple &c2){
    return c1.get_boy_name() > c2.get_boy_name();
}
bool cmp_str(pair<string,string> aux1,pair<string,string> aux2)
{
  if(strcmp(aux1.first.c_str(),aux2.first.c_str()) <0)
  {
    return true;
  }
  else
  {
    return false;
  }
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

    string b_name1,b_name2,b_name3;
    b_name1 = "b1";
    b_name2 = "b49";
    b_name3 = "b99";



    find_girl_friend_1(cp,b_name1);
    find_girl_friend_1(cp,b_name2);
    find_girl_friend_1(cp,b_name3);
    sort(c.begin(),c.end(),cmp_str);
    bina_search(c,b_name1);
    bina_search(c,b_name2);
    bina_search(c,b_name3);
    int hash_t[1000] = {0};
    form_hash(hash_t,c);
    find_hash(hash_t,b_name1);
    find_hash(hash_t,b_name2);
    find_hash(hash_t,b_name3);
}
void bina_search(vector< pair<string,string> > c,string b_name){
  int flag=0,middle;
  int start=0,ennd=c.size();
  string g_name;
    cout<<"implementation2-------->\n";
  while(start<ennd&&!flag){
    middle = (start+ennd)/2;
   if(c[middle].first==b_name){
        flag=1;
        g_name = c[middle].second;
   }
   else if(c[middle].first>b_name)ennd=middle-1;
   else start=middle+1;
   }
  if(flag){
   cout<<g_name<<" is girlfriend of "<<b_name<<"\n";
   }
   else cout<<" no girlfriend found :( \n";
}

void form_hash(int hash_t[],vector< pair<string,string> >c){
    vector< pair<string,string> > ::iterator itc;
    int j=0;
    for(itc = c.begin();itc!=c.end();itc++){
        int p = to_int(itc->first);
        int q = to_int(itc->second);
        hash_t[p] = q;


    }

}
void find_hash(int hash_t[],string b_name){
    int p = to_int(b_name);
    //cout<<"p ="<< p<<endl;
    cout<<"implementation 3---------->\n";
    if(hash_t[p]){
        cout<<"g"<<hash_t[p]<<" is girlfriend of "<<b_name<<endl;

    }
    else{
        cout<<"no girlfriend found :("<<endl;
    }

}
int to_int(string name){
    int ans = 0;
    int l = name.length();
    int j=1;
    for(int i = l-1;i>0;i--){
        ans = (name[i] -'0')*j + ans ;
        j *=10;
    }
    //cout<<"ans = "<<ans<<endl;
    return ans;


}




