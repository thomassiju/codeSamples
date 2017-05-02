#include <iostream>
#include "isprime.h"
using namespace std;

int isPrime(int num){

    int steps = 0;
    int j = 0;
    int divisor = num/2;
    for (int i=2;i<divisor;i++){
        steps++;
        if (num % i == 0){
            cout << "Not a prime number. Number is a multiple of " << i << endl;
            cout << " Number of steps: " << steps << endl;
            j = 1;
            break;
        }
    } 
    if (j==0){
        cout << "Number is Prime: " << num << endl; 
        cout << " Number of steps: " << steps << endl;
    }
    return 0;
}

