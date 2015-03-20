//
//  main.cpp
//  operatorOverloading
//
//  Created by Russ Fenenga on 3/18/15.
//  Copyright (c) 2015 SBCC. All rights reserved.
//

#include <iostream>
#include "Counter.h"

using namespace std;

int main() {
    bool done = false;
    bool overFlow = false;
    char type;
    int value;
    int maxValue = 0;
    int valueToAdd = 0;
    Counter count;
    while(!done){
        cin>>type;
        switch (type) {
            case 'a':
                cin>>value;
                valueToAdd = (1*value);
                count = count + valueToAdd;
                cout << count;
                break;
            case 's':
                cin>>value;
                valueToAdd = (10*value);
                count = count + valueToAdd;
                cout << count;
                break;
            case 'd':
                cin>>value;
                valueToAdd = (100*value);
                count = count + valueToAdd;
                cout << count;
                break;
            case 'f':
                cin>>value;
                valueToAdd = (1000*value);
                count = count + valueToAdd;
                cout << count;
                break;
            case 'o':
                overFlow = check(count);
                
                //cout << "GetPitted";
                if(overFlow){
                    cout << "Enter a new maxvalue for. \n";
                    cin >> maxValue;
                    Counter count2(maxValue,0);
                    count = count2;
                }
                break;
            case 'q':
                done = true;
            default:
                break;
        }
    }
    
}
