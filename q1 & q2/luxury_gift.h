#ifndef luxury_gift_H
#define luxury_gift_H
#include<bits/stdc++.h>
using namespace std;
class luxury_gift{
private:
 int luxury_rating;
 int difficulty;
 int price;
 int value;


public:
    luxury_gift(int luxury_rating,int difficulty,int price,int value);
    int get_price();
    int get_value();
    int get_difficulty();
    int get_luxury_rating();
};

#endif
