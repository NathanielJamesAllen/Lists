// Source2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void bar(int);

int main()
{
    int list[5];
    int i, num;

    for (i = 0; i < 5; i++) {
        cout << "Enter a number:  ";
        cin >> num;
        list[i] = num;
    }
    
    cout << "\n\n";

    for (i = 0; i < 5; i++) {
        bar(list[i]);
        
    }

    

    return 0;


}
void bar(int n) {
    int i;

    cout << "\n\n";

    for (i = 1; i <= n;i++) {
        cout << "*";
    }
    cout << "(" << n << ")" << endl;
}


