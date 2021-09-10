#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

void line();
void bigintadd();
string findSum(string , string );
int main()
{

int val=0;
char ch;
while(val!=1){
cout<<"BigInt Operation in C++"<<endl;
line();
cout<<"1. Addition" <<endl;
cout<<"2. Subtraction" <<endl;
cout<<"3. Multiplication" <<endl;
cout<<"4. Exponentiation " <<endl;
cout<<"5. GCD " <<endl;
cout<<"6. Factorial " <<endl;
cout<<"7. Testing: print 3000 char on screen " <<endl;
cout<<"0. EXIT " <<endl;
cout<<"Enter Choice:  Choose one and press enter : ";
cin>>ch;
line();

switch (ch)
{
    case '0':
                cout<<" Exiting from program"<<endl;
                val=1;
                break;

    case '1':   cout<<"1. Addition" <<endl;
                bigintadd();
                cout<<" END of Addition" <<endl;
                break;
    case '2':   cout <<" WARNING:- NOT IMPLEMENTED"<<endl; break;
    case '3':   cout <<" WARNING: NOT IMPLEMENTED"<<endl;break;
    case '4':   cout <<" WARNING: NOT IMPLEMENTED"<<endl;break;
    case '5':   cout <<" WARNING: NOT IMPLEMENTED"<<endl;break;
    case '6':   cout <<" WARNING: NOT IMPLEMENTED"<<endl;break;
    case '7':   for(int i=0; i<3000;i++){cout<<"X";}
    default:
                cout<<"ERROR: Choice doesn't match any case: Try Again:"<<endl;
                line();
                //cout<<"Try Again:"<<endl;
                continue;
}

cout<<" Exiting from loop";
} //end while loop
return 0;
}

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
//cout<<str2[0]<<endl;
//cout<<str2[1]<<endl;

cout << "RESULT=" <<findSum(str2[0], str2[1])<<endl;
}

string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();

    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');

        // Calculate carry for next step
        carry = sum/10;
    }

    // Add remaining digits of larger number
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}
void line(){
cout<<"-------------------------------------------------"<<endl;
}
void reverse(string str)
{
   for (int i=str.length()-1; i>=0; i--)
      cout << str[i];
}

