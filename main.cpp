#include <iostream>
#include <cstring>
#include <cctype>
/*
 Your code from Chapter 8, exercise 5 is below.
 
 Rewrite the following code to using dynamic arrays.
 */
using namespace std;

int main()
{
    int len;
    int i;
    char *str;
    str = new char [80];
    cout<<"Enter a string: "<<endl;
    cin.get(str,80);
    len = strlen(str);
    for(int i = 0; i < len; i++)
        cout<<static_cast<char>(toupper(str[i]));
    cout<<endl;
    return 0;
}
// the original program
/*
 Your code from Chapter 8, exercise 5 is below.
 
 Rewrite the following code to using dynamic arrays.
 */

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char str[81];
    
    int len;
    
    int i;
    
    cout << "Enter a string: ";
    cin.get(str, 80);
    cout << endl;
    cout << "String in upper case letters is:" << endl;
    
    len = strlen(str);
    for (i = 0; i < len; i++)
        cout << static_cast<char>(toupper(str[i]));
    cout << endl;
    
    return 0;
}
