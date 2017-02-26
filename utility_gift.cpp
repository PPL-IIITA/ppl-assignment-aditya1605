#include "utility_gift.h"
#include<bits/stdc++.h>
utility_gift::utility_gift(int util_value,int util_class,int price,int value){
    this->util_value = util_value;
    this->price = price;
    this->value = value;
    this->util_class = util_class;

    }
int utility_gift::get_util_value(){

    return util_value;
}
int utility_gift::get_price()
{
    return price;
}
int utility_gift::get_value(){
    return value;

}
int utility_gift::get_util_class(){
    return util_class;
}
