//
//  Counter.cpp
//  operatorOverloading
//
//  Created by Russ Fenenga on 3/18/15.
//  Copyright (c) 2015 SBCC. All rights reserved.
//

#include "Counter.h"

Counter::Counter(int max, int val){
    maxVal = max;
    value = val;
}
Counter::Counter(){
    maxVal=9999;
    value=0;
}
Counter operator+(const Counter& c1, int val2add){
    int value = c1.value + val2add;
    int maxValue = c1.maxVal;
    return Counter(maxValue, value);
}
ostream& operator <<(ostream& output, Counter c1){
    output << c1.value << "\n";
    return output;
}
bool check(const Counter& c1){
    if(c1.value > 9999){
        cout << "There was an overflow. \n";
        return true;
    } else {
        cout << "No overflow. \n";
        return false;
    }
}