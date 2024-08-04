#include "mymath.h"
#include <iostream>
using namespace std;
using namespace mymath;

int main() {
    long int i = 0, a = 20, b = 10;
    while(i < 10000000000){
        add(a++, b++);
        subtract(a++, b++);
        //cout << "a + b = " << add(a++, b++) << endl;
        //cout << "a - b = " << subtract(a++, b++) << endl;
        i++;
    }
}