#include "luxury_gift.h"
#include<bits/stdc++.h>
luxury_gift::luxury_gift(int luxury_rating,int difficulty,int price,int value){
    this->luxury_rating = luxury_rating;
    this->prize = price;
    this->value = value;
    this->difficulty = difficulty;

    }
int luxury_gift::get_luxury_rating(){
    return luxury_rating;
}
int luxury_gift::get_price()
{
    return price;
}
int luxury_gift::get_value(){
    return value;

}
int luxury_gift::get_difficulty(){
    return difficulty;
}

