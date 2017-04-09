#include "choosy.h"
#include<bits/stdc++.h>
choosy::choosy(string name,int att,int inte , int maina,int pref){
    this->name = name;
    attractiveness = att;
    intelligence = inte;
    maintanence = maina;
    preference  = pref;
    status = 0;
}
string choosy::get_name(){
    return name;
}
int choosy::get_attractiveness()
{
    return attractiveness;
}
int choosy::get_intelligence(){
    return intelligence;
}
int choosy::get_maintanence(){
    return maintanence;
}
int choosy::get_status(){
    return status;
}
int choosy::get_preference(){
    return preference;
}
void choosy::set_status(int stat){
    status = stat;
}


