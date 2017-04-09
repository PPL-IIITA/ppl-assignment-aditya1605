#ifndef generous_H
#define generous_H
#include<bits/stdc++.h>
using namespace std;
class generous{
private:
 string name;
 int attractiveness;
 int intelligence;
 int budget;
 int status;
 int att_req;

public:
    generous(string name,int att,int inte , int bud ,int req);
    string get_name();
    int get_attractiveness();
    int get_intelligence();
    int get_budget();
    int get_status();
    int get_att_req();
    void set_status(int stat);
};

#endif

