#include "boys.h"
#include<bits/stdc++.h>
boys::boys(string name,int att,int inte , int bud, int req ){
    this->name = name;
    attractiveness = att;
    intelligence = inte;
    budget = bud;
    att_req = req;
    status = 0;
}
string boys::get_name(){
    return name;
}
int boys::get_attractiveness()
{
    return attractiveness;
}
int boys::get_intelligence(){
    return intelligence;
}
int boys::get_budget(){
    return budget;
}
int boys::get_status(){
    return status;
}
int boys::get_att_req()
{
    return att_req;
}
void boys::set_status(int stat){
    status = stat;
}


