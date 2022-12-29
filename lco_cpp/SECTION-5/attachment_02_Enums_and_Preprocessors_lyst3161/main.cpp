//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright © 2020 lco. All rights reserved.
//




#include <iostream>
using namespace std;

enum MsOffice: uint8_t {
    BOLD = 0,
    ITALICS = 2,
    UNDERLINE = 4,
    COSSED
};


int main() {
    int myAttributes = UNDERLINE;
    
    cout << myAttributes << endl;
    
    
    return 0;
}


