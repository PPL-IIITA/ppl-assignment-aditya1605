#include "geek.h"
#include<bits/stdc++.h>
geek::geek(string name,int att,int inte , int bud ,int req ){
    this->name = name;
    attractiveness = att;
    intelligence = inte;
    budget = bud;
    att_req = req;
    status = 0;
}
string geek::get_name(){
    return name;
}
int geek::get_attractiveness()
{
    return attractiveness;
}
int geek::get_intelligence(){
    return intelligence;
}
int geek::get_budget(){
    return budget;
}
int geek::get_status(){
    return status;
}
int geek::get_att_req()
{
    return att_req;
}
void geek::set_status(int stat){
    status = stat;
}


