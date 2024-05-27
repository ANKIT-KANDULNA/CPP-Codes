#include <iostream>
using namespace std;
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    char ch[6]="abcde";
    cout<<arr<<endl;
    cout<<ch<<endl;
    char *c=&ch[0];
    cout<<c<<endl;
    char temp='z';
    char *p=&temp;
    cout<<p<<endl;
    return 0;
}