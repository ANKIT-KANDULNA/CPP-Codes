#include <iostream>
using namespace std;
int main(){
    char c;
    cin.get(c);
    while(c!='\n'){
        cout.put(c);
        cin.get(c);
    }
    return 0;
}