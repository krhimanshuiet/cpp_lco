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
    
    char call_api = 'h';
    
    try{
        cout << "trying to use API value\n";
        cout << "did some testing with api value\n";
        throw call_api;
        cout << "NO code execute after return and throw\n";
    } catch(int x){
        cout << "integer exception handled\n";
    } catch (float f){
        cout << "float exception handled\n";
    } catch(...){
        cout << "something went wrong\n";
    }
    
    cout << "Keep on moving with rest of code\n";
    
    return 0;
}
