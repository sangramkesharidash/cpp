#include<iostream>
using namespace std;

int chr2int(char c);
int main()
{

int x,y;
char a,b;

cout<<"START";
cout<<"enter two number chars separated by space"<<endl;
cin>>a>>b;
cout<<a<<endl;
cout<<b<<endl;
cout <<"--------------------"<<endl;
x=(int)a;
y=(int)b;
cout <<x<<" "<<y<<endl;
cout <<"--------------------"<<endl;

x=chr2int(a);
y=chr2int(b);
cout <<x<<" "<<y<<endl;
return 0;
}


int chr2int(char c){
int n=0;
n=(int)c;
n=n-48;

return n;
}
