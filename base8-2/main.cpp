//
//  main.cpp
//  base8-2
//
//  Created by suchao on 5/14/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>

#define MAX 100

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input number n:\n";
    
    int lower = 0;
    int upper = 0;
    int number = 0;
    char l[MAX];
    char u[MAX];
    char num[MAX];
    
    char a;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a >= 'a' && a <= 'z'){
            l[lower] = a;
            lower++;
            
        }else if(a >= 'A' && a <= 'Z'){
            u[upper] = a;
            upper++;
        }else{
            num[number] = a;
            number++;
        }
    }
    
    cout << "Capital num: " << upper;
    for(int i=0; i<upper; i++){
        cout << " " << u[i];
    }
    cout << endl;
    
    cout << "Lowercase num: " << lower;
    for(int i=0; i<lower; i++){
        cout << " " << l[i];
    }
    cout << endl;
    
    cout << "Digits num: " << number;
    for(int i=0; i<number; i++){
        cout << " " << num[i];
    }
    cout << endl;
    
    
    return 0;
}
