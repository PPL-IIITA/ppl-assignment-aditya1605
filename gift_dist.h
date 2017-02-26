#ifndef gift_dist_H
#define gift_dist_H
#include<bits/stdc++.h>
#include "couple.h"
#include "gifts.h"
using namespace std;
class gift_dist{
public:

    friend void dist(vector< gifts > &gif , vector<couple> &cp);
};
void dist(vector< gifts > &gif , vector<couple> &cp);
#endif


