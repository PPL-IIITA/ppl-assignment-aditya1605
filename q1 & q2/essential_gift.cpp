#include "essential_gift.h"
#include<bits/stdc++.h>
essential_gift::essential_gift(int price,int value){
    this->prize = price;
    this->value = value;

    }
int essential_gift::get_price()
{
    return price;
}
int essential_gift::get_value(){
    return value;
}


