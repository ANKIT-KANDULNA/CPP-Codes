#include <iostream>
using namespace std;
int main()
{
    char alphabet[26];
    char *ptr=alphabet;
    for(char i='A';i<='Z';i++)
    {
        *ptr=i;
        *ptr++;
    }
    ptr=alphabet;
    while(*ptr!='[')
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    return 0;
}