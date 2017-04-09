#ifndef girls_H
#define girls_H
#include<bits/stdc++.h>
using namespace std;
class girls{
private:
 string name;
 int attractiveness;
 int intelligence;
 int maintanence;
 int status;
 int preference;



public:
    girls(string name,int att,int inte , int bud,int pref );
    string get_name();
    int get_attractiveness();
    int get_intelligence();
    int get_status();
    int get_maintanence();
    int get_preference();
    void set_status(int stat);
};

#endif


