//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright © 2020 lco. All rights reserved.
//

#include <iostream>


using namespace std;

int main() {
    
    printf("Float size is %ld bits\n", sizeof(long double) * 8);
    
    float my_p_value = 20.2 + 20.2;
    
    if (my_p_value == 40.400002) {
        puts("You got it right");
    }else{
        puts("something");
    }
    
    printf("My P value is: %1.30f in float\n", my_p_value);
    
    return 0;
}
