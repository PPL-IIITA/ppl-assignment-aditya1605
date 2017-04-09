#include "girls.h"
#include<bits/stdc++.h>
girls::girls(string name,int att,int inte , int maina,int pref){
    this->name = name;
    attractiveness = att;
    intelligence = inte;
    maintanence = maina;
    preference  = pref;
    status = 0;
}
string girls::get_name(){
    return name;
}
int girls::get_attractiveness()
{
    return attractiveness;
}
int girls::get_intelligence(){
    return intelligence;
}
int girls::get_maintanence(){
    return maintanence;
}
int girls::get_status(){
    return status;
}
int girls::get_preference(){
    return preference;
}
void girls::set_status(int stat){
    status = stat;
}



