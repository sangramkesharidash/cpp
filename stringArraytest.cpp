#include<iostream>
#include <string>
using namespace std;

string* takeinput(){

//string str[2];
string* str = new string[2];
cout <<" Enter Operand 1 "<<endl; cin >> str[0];
cout <<" Enter Operand 2 "<<endl; cin >> str[1];

return str;
}

void bigintadd(){
//string str1 = "12";
//string str2 = "198111";

string *str2;

str2=takeinput();
cout<<str2[0]<<endl;
cout<<str2[1]<<endl;

//cout << findSum(str1, str2);
}

int main(){

bigintadd();


return 0;
}
