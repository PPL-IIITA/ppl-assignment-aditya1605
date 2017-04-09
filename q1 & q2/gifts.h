#ifndef gifts_H
#define gifts_H
#include<bits/stdc++.h>
using namespace std;
class gifts{
private:
 string name;
 int price;
 int value;
 int att_1;
 int att_2;
 int type;
 int alloc_status;

public:
    gifts(string name,int price,int value,int att_1,int att_2,int type);
    string get_name();
    int get_price();
    int get_value();
    int get_att_1();
    int get_att_2();
    int get_type();
    int get_alloc_status();
    void set_alloc_status(int stat);
};

#endif


