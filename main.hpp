#include <iostream>
using namespace std;

void swapValues(int &, int &);
void swapValues(int &, int &, int &);
void swapValues(int &, int &, int &, int &);

void swapValues(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapValues (int &n1, int &n2, int &n3) {
    swapValues(n1, n2);
    swapValues(n2, n3);
}

void swapValues(int &n1, int &n2, int &n3, int &n4) {
    swapValues(n1, n4);
    swapValues(n2, n3);
}