#include "desperate.h"
#include<bits/stdc++.h>
desperate::desperate(string name,int att,int inte , int maina, int pref ){
    this->name = name;
    attractiveness = att;
    intelligence = inte;
    maintanence = maina;
    preference = pref;
    status = 0;
}
string desperate::get_name(){
    return name;
}
int desperate::get_attractiveness()
{
    return attractiveness;
}
int desperate::get_intelligence(){
    return intelligence;
}
int desperate::get_maintanence(){
    return maintanence;
}
int desperate::get_status(){
    return status;
}
int desperate::get_preference(){
    return preference;
}
void desperate::set_status(int stat){
    status = stat;
}




