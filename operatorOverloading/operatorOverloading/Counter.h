//
//  Counter.h
//  operatorOverloading
//
//  Created by Russ Fenenga on 3/18/15.
//  Copyright (c) 2015 SBCC. All rights reserved.
//

#ifndef __operatorOverloading__Counter__
#define __operatorOverloading__Counter__

#include <stdio.h>
#include <iostream>
using namespace std;

class Counter{
private:
    int value;
    int maxVal;
public:
    Counter();
    Counter(int, int);
    friend bool check(const Counter&);
    friend Counter operator +(const Counter&, int);
    friend ostream& operator <<(ostream&output, Counter);
};



#endif /* defined(__operatorOverloading__Counter__) */
