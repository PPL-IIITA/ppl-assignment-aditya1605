#ifndef couple_H
#define couple_H
#include<bits/stdc++.h>
using namespace std;
class couple{
private:
 string boy_name;
 string girl_name;
 int happiness;
 int compatibility;
public:
    couple(string boy_name,string girl_name,int happiness,int compatibility);
    string get_boy_name();
    string get_girl_name();
    int get_happiness();
    int get_compatibility();
};

#endif

