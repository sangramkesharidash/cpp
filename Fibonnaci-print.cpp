#include <bits/stdc++.h>
using namespace std;

// Function to print
// first n Fibonacci Numbers
void printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, i;

    if (n < 1)
        return;
    cout <<f1 << " ";
    for (i = 1; i < n; i++) {
        cout << " X "<< f2 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

// Driver Code
int main()
{int n;
cout<< "enter a no:" ;
cin>>n;
cout<<"Fibonacci of " <<n <<" is: "<< endl;
    printFibonacciNumbers(n);
    //printFibonacciNumbers(7);
    return 0;
}
