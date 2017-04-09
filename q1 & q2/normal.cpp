#include "normal.h"
#include<bits/stdc++.h>
normal::normal(string name,int att,int inte , int maina,int pref ){
    this->name = name;
    attractiveness = att;
    intelligence = inte;
    preference = pref;
    maintanence = maina;
    status = 0;
}
string normal::get_name(){
    return name;
}
int normal::get_attractiveness()
{
    return attractiveness;
}
int normal::get_intelligence(){
    return intelligence;
}
int normal::get_maintanence(){
    return maintanence;
}
int normal::get_status(){
    return status;
}
int normal::get_preference(){
    return preference;
}
void normal::set_status(int stat){
    status = stat;
}



