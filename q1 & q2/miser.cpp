#include "miser.h"
#include<bits/stdc++.h>
miser::miser(string name,int att,int inte , int bud, int req ){
    this->name = name;
    attractiveness = att;
    intelligence = inte;
    budget = bud;
    att_req = req;
    status = 0;
}
string miser::get_name(){
    return name;
}
int miser::get_attractiveness()
{
    return attractiveness;
}
int miser::get_intelligence(){
    return intelligence;
}
int miser::get_budget(){
    return budget;
}
int miser::get_status(){
    return status;
}
int miser::get_att_req()
{
    return att_req;
}
void miser::set_status(int stat){
    status = stat;
}

