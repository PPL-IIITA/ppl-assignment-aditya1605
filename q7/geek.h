#ifndef geek_H
#define geek_H
#include<bits/stdc++.h>
using namespace std;
class geek{
private:
 string name;
 int attractiveness;
 int intelligence;
 int budget;
 int status;
 int att_req;


public:
    geek(string name,int att,int inte , int bud ,int req);
    string get_name();
    int get_attractiveness();
    int get_intelligence();
    int get_budget();
    int get_status();
    int get_att_req();
    void set_status(int stat);
};

#endif

