//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright © 2020 lco. All rights reserved.
//

//https://stackoverflow.com/questions/9248533/how-does-a-linker-know-what-all-libraries-to-link
//https://stackoverflow.com/questions/3322911/what-do-linkers-do


#include <iostream>


using namespace std;



int main() {
    
    int life = 3;
    int points = 4;
    
    int score = 2;
    
    score += points;
    
    if (life != 5) {
        puts("Into the if block");
    }
    
    return 0;
}


