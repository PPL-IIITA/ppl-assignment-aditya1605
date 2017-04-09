#ifndef utility_gift_H
#define utility_gift_H
#include<bits/stdc++.h>
using namespace std;
class utility_gift{
private:
 int util_value;
 int util_class;
 int price;
 int value;


public:
    utility_gift(int util_value,int util_class,int price,int value);
    int get_util_value();
    int get_util_class();
    int get_price();
    int get_value();

};

#endif

