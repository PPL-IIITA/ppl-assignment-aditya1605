#ifndef boys_H
#define boys_H
#include<bits/stdc++.h>
using namespace std;
class boys{
private:
 string name;
 int attractiveness;
 int intelligence;
 int budget;
 int status;
 int att_req;


public:
    boys(string name,int att,int inte , int bud,int req );
    string get_name();
    int get_attractiveness();
    int get_intelligence();
    int get_budget();
    int get_status();
    int get_att_req();
    void set_status(int stat);
};

#endif

