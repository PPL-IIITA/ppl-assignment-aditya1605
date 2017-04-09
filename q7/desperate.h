#ifndef desperate_H
#define desperate_H
#include<bits/stdc++.h>
using namespace std;
class desperate{
private:
 string name;
 int attractiveness;
 int intelligence;
 int maintanence;
 int preference;
 int status;



public:
    desperate(string name,int att,int inte , int bud,int pref );
    string get_name();
    int get_attractiveness();
    int get_intelligence();
    int get_status();
    int get_maintanence();
    int get_preference();
    void set_status(int stat);
};

#endif



