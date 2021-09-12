#include<iostream>
//#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <thread>
using namespace std;

void line();
string* takeinput();
string stringreverse(string);
string bigintadd(string*);
string bigintsubtract(string*);
string bigintmultiply(string*);
string bigintdivision(string*);
bool isSmaller(string, string);

string findSum(string , string );
string findDiff(string, string );
string multiply(string, string );
string biginfixexpreval(string);
string bigintexponentiation(string,long long int);
string bigintfactorial(string);

int main()
{

int val=0;
char ch;
string* str_input;
string addresult;
string subresult;
string mulresult;
string divresult;
string biginfixexpr;
string exponentbase;
long long int exponent;
string expresult;
string factbignumber,factesult;


cout<<"BigInt Operation in C++ : Large number represented as string"<<endl;
line();


while(val!=1){

cout<<"1. Addition" <<endl;
cout<<"2. Subtraction" <<endl;
cout<<"3. Multiplication" <<endl;
cout<<"4. Division" <<endl;
cout<<"5. BigInt Calculator INFIX" <<endl;
cout<<"6. Exponentiation " <<endl;
cout<<"7. GCD " <<endl;
cout<<"8. Factorial " <<endl;
cout<<"9. Testing: print 3000 char on screen " <<endl;
cout<<"0. EXIT " <<endl;
cout<<"Enter Choice:  Choose one and press enter : ";
cin>>ch;
line();


//cout<<"str_input"<<"\n"<<str_input[0]<<"\n"<<str_input[1]<<endl;


switch (ch)
{
    case '0':
                cout<<" Exiting from program"<<endl;
                val=1;
                break;

    case '1':   //cout<<"1. Addition" <<endl;
                str_input=takeinput();line();
                addresult=bigintadd(str_input);
                cout<<"add result=="<<addresult<<endl;
                line();
                //cout<<" END of Addition" <<endl;
                break;
    case '2':   str_input=takeinput();line();
                subresult=bigintsubtract(str_input);
                cout<<"sub result=="<<subresult<<endl;
                line();
                //cout <<" WARNING:- NOT IMPLEMENTED"<<endl;
                break;
    case '3':   str_input=takeinput();line();
                mulresult=bigintmultiply(str_input);
                cout<<"mul result=="<<mulresult<<endl;
                line();
                //cout <<" WARNING: NOT IMPLEMENTED"<<endl;
                break;
    case '4':
                str_input=takeinput();line();
                //divresult=bigintdivision(str_input);
                cout <<" WARNING: NOT IMPLEMENTED"<<endl;
                break;
    case '5':   cout<<" Enter Big Int eval Expression : ";
                cin>>biginfixexpr;

                biginfixexpreval(biginfixexpr);
                line();
                //cout <<" WARNING: NOT IMPLEMENTED"<<endl;
                break;
    case '6':    cout<<"Exponentiation";
                 cout<<" Enter Base:"; cin>>exponentbase;
                 cout<<" Enter Exponent:"; cin>>exponent;
                 expresult=bigintexponentiation(exponentbase,exponent);
                 cout<<endl; cout<<"expresult= "<<expresult;cout<<endl;
                 line();
                //cout <<" WARNING: NOT IMPLEMENTED"<<endl;
                break;
    case '7':   cout <<" WARNING: NOT IMPLEMENTED"<<endl;break;
    case '8':   cout<<" Factorial ";
                cout<<"Enter a BigInt Number to find factorial:";
                cin>>factbignumber;
                factesult=bigintfactorial(factbignumber);
                cout<<"factesult:"<<factesult<<endl;
                line();
                //cout <<" WARNING: NOT IMPLEMENTED"<<endl;
                break;

    case '9':   for(int i=0; i<3000;i++){cout<<"X";}
    default:
                cout<<"ERROR: Choice doesn't match any case: Try Again:"<<endl;
                line();
                //cout<<"Try Again:"<<endl;
                continue;
}

//cout<<" Exiting from loop";
} //end while loop
return 0;
}

string biginfixexpreval(string biginfixexpr)
{
//cout <<"inside eval "<<biginfixexpr;

string s1,s2;



}


string bigintexponentiation(string exponentbase,long long int exponent)
{

long long int i;
//cout<"exponentbase="<<exponentbase<<"exponent="<<exponent;
string x,y,zero,result;
x='1';
zero='0';
y=exponentbase;
//string s1='20',s2='20';
//cout<<multiply(x,y);
if((exponentbase.compare(zero)) == 0 || (exponent == 0) ){return "1";}
//if(exponent == 0){return "1";}


//if(exponentbase=='0' && exponent=='0'){ return '1';}
for(i=0;i<exponent;i++)
{
    result=multiply(x,y);
    x=result;
}
//cout<<endl;cout<<" result= "<<result;
return result;
}

string bigintfactorial(string n)
{   string one="1";
    string result;
    string zero1="0";
    string zero2="00";
    string zero3="000";
    string zero4="0000";
    string zero5="00000";
    string nminus1;
    string nminus1fact;
    result=n;
    nminus1=findDiff(n,one);
    cout <<"nminus1: "<<nminus1<<endl;
//    nminus1fact=bigintfactorial(n,nminus1);

    do{
        result=multiply(result,nminus1);
        //cout<<"nminus1: "<<nminus1<<" result "<< result <<endl;
        //n=nminus1;
        nminus1=findDiff(nminus1,one);
        //std::this_thread::sleep_for(1ms);
     if(
        (nminus1.compare(zero1)) == 0 ||
        (nminus1.compare(zero2)) == 0 ||
        (nminus1.compare(zero3)) == 0 ||
        (nminus1.compare(zero4)) == 0 ||
        (nminus1.compare(zero5)) == 0
        ){ //cout<<" niszero"<<endl;
                                        return result;}

    } while(true);
    //return result;
}



string* takeinput(){

//string str[2];
string* str = new string[2];
cout <<" Enter Operand 1 :"; cin >> str[0];
cout <<" Enter Operand 2 :"; cin >> str[1];

return str;
}

string bigintadd(string* str2){
//string str1 = "12";
//string str2 = "198111";

//string *str2;
//str2=takeinput();

//cout<<str2[0]<<endl;
//cout<<str2[1]<<endl;

//cout << "RESULT=" <<"\n"<<findSum(str2[0], str2[1])<<endl;
string aresult=findSum(str2[0], str2[1]);
return aresult;

}

string bigintsubtract(string* s)
{
string sresult=findDiff(s[0],s[1]);
//cout << "RESULT=" <<"\n"<<findDiff(s[0],s[1])<<endl;
return sresult;
}

string bigintmultiply(string* s)
{
string mresult=multiply(s[0],s[1]);
//cout << "RESULT=" <<"\n"<<findDiff(s[0],s[1])<<endl;
return mresult;
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
 //reverse(str1.begin(), str1.end());
// reverse(str2.begin(), str2.end());

str1=stringreverse(str1);
str2=stringreverse(str2);

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
  //reverse(str.begin(), str.end());
  str=stringreverse(str);

    return str;
}
void line(){
cout<<"-------------------------------------------------"<<endl;
}

/*void reverse(string str)
{
   for (int i=str.length()-1; i>=0; i--)
      cout << str[i];
}
*/

//void bigintadd(string* str2){}
bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;

    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;

    return false;
}
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();

    // Reverse both of strings
    //reverse(str1.begin(), str1.end());
    //reverse(str2.begin(), str2.end());
    str1=stringreverse(str1);
    str2=stringreverse(str2);
    int carry = 0;

    // Run loop till small string length
    // and subtract digit of str1 to str2
    for (int i = 0; i < n2; i++) {
        // Do school mathematics, compute difference of
        // current digits

        int sub
            = ((str1[i] - '0') - (str2[i] - '0') - carry);

        // If subtraction is less then zero
        // we add then we add 10 into sub and
        // take carry as 1 for calculating next step
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // subtract remaining digits of larger number
    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') - carry);

        // if the sub value is -ve, then make it positive
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // reverse resultant string
    // reverse(str.begin(), str.end());
    str=stringreverse(str);
    return str;
}

string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";

    // will keep the result number in vector
    // in reverse order
    vector<int> result(len1 + len2, 0);

    // Below two indexes are used to find positions
    // in result.
    int i_n1 = 0;
    int i_n2 = 0;

    // Go from right to left in num1
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        // To shift position to left after every
        // multiplication of a digit in num2
        i_n2 = 0;

        // Go from right to left in num2
        for (int j=len2-1; j>=0; j--)
        {
            // Take current digit of second number
            int n2 = num2[j] - '0';

            // Multiply with current digit of first number
            // and add result to previously stored result
            // at current position.
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;

            // Carry for next iteration
            carry = sum/10;

            // Store result
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        // store carry in next cell
        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        // To shift position to left after every
        // multiplication of a digit in num1.
        i_n1++;
    }
 // ignore '0's from the right
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;

    // If all were '0's - means either both or
    // one of num1 or num2 were '0'
    if (i == -1)
    return "0";

    // generate the result string
    string s = "";

    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}


string stringreverse(string s)
{

string str = s;

    //Initialize reverse with null string value
string rev = "";

    //Iterate input string in revrese order
for(int i=str.length()-1; i>=0; i--){
        //concatenate characters to the reverse
        rev = rev + str[i];
    }
    //cout << rev;
    return rev;


}

/*

int evaluate(string tokens){
    int i;

    // stack to store integer values.
    stack <string> values;
   // stack to store operators.
    stack <char> ops;

    for(i = 0; i < tokens.length(); i++){

        // Current token is a whitespace,
        // skip it.
        if(tokens[i] == ' ')
            continue;

        // Current token is an opening
        // brace, push it to 'ops'
        else if(tokens[i] == '('){
            ops.push(tokens[i]);
        }

        // Current token is a number, push
        // it to stack for numbers.
        else if(isdigit(tokens[i])){
            int val = 0;

            // There may be more than one
            // digits in number.
            while(i < tokens.length() &&
                        isdigit(tokens[i]))
            {
                val = (val*10) + (tokens[i]-'0');
                i++;
            }

            values.push(val);

            // right now the i points to
            // the character next to the digit,
            // since the for loop also increases
            // the i, we would skip one
            //  token position; we need to
            // decrease the value of i by 1 to
            // correct the offset.
              i--;
        }
        // Closing brace encountered, solve
        // entire brace.
        else if(tokens[i] == ')')
        {
            while(!ops.empty() && ops.top() != '(')
            {
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }

            // pop opening brace.
            if(!ops.empty())
               ops.pop();
        }

        // Current token is an operator.
        else
        {
            // While top of 'ops' has same or greater
            // precedence to current token, which
            // is an operator. Apply operator on top
            // of 'ops' to top two elements in values stack.
            while(!ops.empty() && precedence(ops.top())
                                >= precedence(tokens[i])){
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }

            // Push current token to 'ops'.
            ops.push(tokens[i]);
        }
    }

    // Entire expression has been parsed at this
    // point, apply remaining ops to remaining
    // values.
    while(!ops.empty()){
        int val2 = values.top();
        values.pop();

        int val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(applyOp(val1, val2, op));
    }

    // Top of 'values' contains result, return it.
    return values.top();
}
*/
