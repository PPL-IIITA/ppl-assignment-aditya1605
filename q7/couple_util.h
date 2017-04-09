#ifndef couple_util_H
#define couple_util_H
#include<bits/stdc++.h>
#include "miser.h"
#include "generous.h"
#include "geek.h"
#include "choosy.h"
#include "normal.h"
#include "desperate.h"
#include "couple.h"

using namespace std;

class coupleutil{

        friend void scan_couple(vector< pair<string,string> > *c,vector<miser> *b1 ,vector<generous> *b2,vector<geek> *b3,vector<choosy> *g1 ,vector<normal> *g2,vector <desperate> *g3);
        friend void coupling_2(vector<couple> &c,vector<miser> &b1 ,vector<generous> &b2,vector<geek> &b3,vector<choosy> &g1 ,vector<normal> &g2,vector <desperate> &g3,int k);
        friend void coupling_t(vector<couple> &c,vector<miser> &b1 ,vector<generous> &b2,vector<geek> &b3,vector<choosy> &g1 ,vector<normal> &g2,vector <desperate> &g3,int t);
        friend void find_girl_friend_1(vector<couple> &c,string b_name);
};
void scan_couple(vector< pair<string,string> > *c,vector<miser> *b1 ,vector<generous> *b2,vector<geek> *b3,vector<choosy> *g1 ,vector<normal> *g2,vector <desperate> *g3);
void coupling_2(vector<couple> &c,vector<miser> &b1 ,vector<generous> &b2,vector<geek> &b3,vector<choosy> &g1 ,vector<normal> &g2,vector <desperate> &g3,int k);
void coupling_t(vector<couple> &c,vector<miser> &b1 ,vector<generous> &b2,vector<geek> &b3,vector<choosy> &g1 ,vector<normal> &g2,vector <desperate> &g3,int t);
void find_girl_friend_1(vector<couple> &c,string b_name);
#endif
