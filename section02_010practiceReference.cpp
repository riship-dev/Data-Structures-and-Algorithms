#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;    //reference r is data of a
    r++;    //a++
    cout << "r=" << r << endl;
    cout << "a=" << a << endl;
}