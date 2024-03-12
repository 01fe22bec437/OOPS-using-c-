#include<iostream>
using namespace std;

int main() {
    int n, i, sum = 0, originalN;
    cout << "enter the number: ";
    cin >> n;
    originalN = n; 
    while (n != 0) {
        i = n % 10;
        sum = sum+ i * i * i;
        n = n / 10;
    }
    if (originalN == sum)
        cout << "armstrong number";
    else
        cout << "not armstrong number";

    return 0;
}
