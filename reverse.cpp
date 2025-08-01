#include <iostream>
#include <algorithm>
using namespace std;
int rev(int num){
    string s=to_string(num);
    reverse(s.begin(),s.end());
    return (int)stoi(s);
}
int main(){
    int x=210;
    int ans=rev(x);
    cout<<ans;
    return 0;
}