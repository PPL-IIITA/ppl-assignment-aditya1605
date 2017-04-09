#include "generous.h"
#include<bits/stdc++.h>
generous::generous(string name,int att,int inte , int bud,int req ){
    this->name = name;
    attractiveness = att;
    intelligence = inte;
    budget = bud;
    att_req = req;
    status = 0;
}
string generous::get_name(){
    return name;
}
int generous::get_attractiveness()
{
    return attractiveness;
}
int generous::get_intelligence(){
    return intelligence;
}
int generous::get_budget(){
    return budget;
}
int generous::get_status(){
    return status;
}
int generous::get_att_req()
{
    return att_req;
}
void generous::set_status(int stat){
    status = stat;
}


