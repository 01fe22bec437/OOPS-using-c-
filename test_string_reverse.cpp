#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    char a[100];
    string b;

    cout << "Enter a string: ";
    cin>>a;

    b = a;
    reverse(b.begin(), b.end());

    cout << "Reversed string: " << b << endl;

    return 0;
}
