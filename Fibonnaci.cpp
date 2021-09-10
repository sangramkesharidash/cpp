#include<iostream>
using namespace std;

int fib(int n);
void print(int n);

int main()
{
int n;
cout<< "enter a no:" ;
cin>>n;
cout<<"Fibonacci of" <<n <<" is: "<<fib(n)<< endl;
//cout<<"Fibonacci series of" <<n <<"is: "<<print(n)<< endl;
print(n);

return 0;
}

int fib(int n)
{
    //cout<<n<<" ";
    if(n<=1){return n;}
    else{
        return fib(n-1)+fib(n-2);
    }

}

void print(int n){
    int curr=0,prev=0;

if(n<=1){return n;}

for (int i=0;i<n;i++){
        cout<<i+prev<< " ";
        prev=i;
}

}
