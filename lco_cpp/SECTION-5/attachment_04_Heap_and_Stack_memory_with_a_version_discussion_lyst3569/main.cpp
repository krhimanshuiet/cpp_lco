//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright © 2020 lco. All rights reserved.
//

#include <iostream>

struct User{
    const int id;
    int age;
    
    User() : id(001), age(22){}
    
};

int main() {
    using namespace std;
    //stack
    int score = 100;
    User mike;
    
    //heap
    
    int* heap_score = new int;
    *heap_score = 200;
    
    User* nike = new User();
    
    
    delete heap_score;
    delete nike;
    
    return 0;
}


