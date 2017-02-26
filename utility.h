#ifndef utility_H
#define utility_H
#include<bits/stdc++.h>
#include "miser.h"
#include "generous.h"
#include "geek.h"
#include "choosy.h"
#include "normal.h"
#include "desperate.h"
using namespace std;
class utility{
public:
    friend void scan(vector<miser> *b1 ,vector<generous> *b2,vector<geek> *b3,vector<choosy> *g1 ,vector<normal> *g2,vector <desperate> *g3);
    friend void coupling(vector<miser> &b1 ,vector<generous> &b2,vector<geek> &b3,vector<choosy> &g1 ,vector<normal> &g2,vector <desperate> &g3,vector< pair<string,string> > &couples,vector< pair<int,int> > &couples_type  );
    friend int maxxa(int a,int b,int c);
};
 void scan(vector<miser> *b1 ,vector<generous> *b2,vector<geek> *b3,vector<choosy> *g1 ,vector<normal> *g2,vector <desperate> *g3);
 void coupling(vector<miser> &b1 ,vector<generous> &b2,vector<geek> &b3,vector<choosy> &g1 ,vector<normal> &g2,vector <desperate> &g3,vector< pair<string,string> > &couples,vector< pair<int,int> > &couples_type );
 int maxxa(int a,int b,int c);

#endif



