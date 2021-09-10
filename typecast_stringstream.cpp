#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    stringstream str;

    str << "5"; int x; str >> x;
    cout<<"Converted value of character 5 :"<<x;
}
