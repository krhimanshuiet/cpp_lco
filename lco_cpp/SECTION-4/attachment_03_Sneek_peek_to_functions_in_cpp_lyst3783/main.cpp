//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright © 2020 lco. All rights reserved.
//

#include <iostream>


using namespace std;

void sayHello(){
    puts("Hello there!");
}

int sayTwo(){
//    puts("2");
    return 2;
}

void sayThree(){
    puts("3");
}

int main() {
    
    sayHello();
    printf("%d\n", sayTwo() + 2);
    sayThree();
    
    return 0;
}


