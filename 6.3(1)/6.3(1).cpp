#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
void Cin(int mas[], const int k);
void Cout(int mas[], const int k);

int main()
{
    const int n = 8;
    int a[n];
    Cin(a, n);
    Cout(a, n);
    return 0;
}

void Cin(int mas[], const int k)
{
    for (int i = 0; i < k; i++) {
        cout << "a[" << i << "] = ";
        cin >> mas[i];
    }
    cout << endl;
}

void Cout(int mas[], const int k)
{
    cout << "a = { ";
    for (int i = 0; i < k; i++) {
        cout << mas[i] << "; ";
    }
    cout << "}";
}