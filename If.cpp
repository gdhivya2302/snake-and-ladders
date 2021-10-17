#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number:";
    cin>>n;

    if ((n%3 == 0)&&(n%5 == 0))
    {
        cout << "\n It's Divisible by 3 and 5";
    } else {
        cout << "\n It's not Divisible by 3 and 5";
    }

    return 0;
}
