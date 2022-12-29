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
    int life;
    life = 4;
    
    int card;
    card = 40;
    int my_card = card;
    
    int *myp;
    myp = &card;
    
    my_card = *myp; //pointer deref.
    
    printf("Value of card is: %d\n", my_card);
    printf("Value of card is: %p\n", myp);
    printf("Value of card is: %d\n", my_card);
    
    
    return 0;
}
