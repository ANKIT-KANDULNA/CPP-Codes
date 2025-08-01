#include <iostream>
using namespace std;
void reachHome(int src,int dest){
    cout<<src<<" ";
    if(src==dest){
        cout<<"Pahuch Gaya"<<endl;
        return ;
    } 
    reachHome(src+1,dest);
}
int main(){
    int dest=9;
    int src=1;
    reachHome(src,dest);
    return 0;
}