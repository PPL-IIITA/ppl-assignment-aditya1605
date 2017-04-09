#include "couple.h"
#include<bits/stdc++.h>
couple::couple(string boy_name,string girl_name,int happiness,int compatibility){
    this->boy_name = boy_name;
    this->girl_name = girl_name;
    this->happiness = happiness;
    this->compatibility = compatibility;
}
string couple::get_boy_name(){
    return boy_name;
}
string couple::get_girl_name(){
    return girl_name;
}
int couple::get_happiness(){
    return happiness;
}
int couple::get_compatibility(){
    return compatibility;
}
