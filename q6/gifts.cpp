#include "gifts.h"
#include<bits/stdc++.h>
gifts::gifts(string name,int price,int value,int att_1,int att_2,int type){
    this->name  = name;
    this->price= price;
    this->value = value;
    this->att_1 = att_1;
    this->att_2 = att_2;
    this->type = type;
    this->alloc_status = 0;
}
string gifts::get_name(){
    return name;
}
int gifts::get_price(){
    return price;
}
int gifts::get_value(){
    return value;
}
int gifts::get_att_1(){
    return att_1;
}
int gifts::get_att_2(){
    return att_2;
}
int gifts::get_type(){
    return type;
}
int gifts::get_alloc_status(){
    return alloc_status;
}
void gifts::set_alloc_status(int stat){
    alloc_status = stat;

}
