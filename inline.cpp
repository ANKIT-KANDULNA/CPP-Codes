#include <iostream>
using namespace std;
inline int cube(int a){
    return a*a*a;
}
int main(){
    int a=5;
    int ans=cube(a);
    cout<<ans;
    return 0;
}