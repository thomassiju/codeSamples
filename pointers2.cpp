#include <iostream>
#include "isprime.h"
using namespace std;


int main(){


    int myval = 25;
    int *point = &myval;
	int baz = *point;

    cout << "MyVal:" << myval << endl;
    cout << "*Point:" << *point << endl;
    cout << "Point:" << point << endl;
    cout << "&MyVal:" << &myval << endl;
	cout << "baz=*point: " << baz << endl;

/*
    isPrime(13);
*/

/*
    int num = 15;
    int steps = 0;
    int j = 0;
    int divisor = num/2;
    cout << "Divisor is " << num/2 << endl;
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
    }
*/
    return 0;
}
