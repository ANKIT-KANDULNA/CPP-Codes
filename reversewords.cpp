#include <iostream>
#include <vector>
using namespace std;
void reversestring(char str[]){
    int n=str.size();
    int s=0;
    int e=n-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
}
int main(){
    vector<char> s;
    cout<<"Enter a string:";
    int n=s.size();
    int a=0;
    while(a<n){
        char x;
        cin>>x;
        s.push_back(x);
    }
    int j=0;
    char temp;
    for(int i=0;i<n;i++){
        while(j!=' ' || j!='\0'){
            reversestring(s)
        }
    }
    return 0;
}