#include <iostream>
using namespace std;
int main(){
    string str="Ankit Kandulna";
    int n=str.length();
    cout.write(str.c_str(),n); //converts it into a character array/string
    return 0;
}