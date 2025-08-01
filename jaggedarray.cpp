#include <iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int **arr=new int *[row];
    int *colSizes=new int[row];
    for(int i=0;i<row;i++){
        int col;
        cin>>col;
        colSizes[i]=col;
        arr[i]=new int[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<colSizes[i];j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<colSizes[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    delete []colSizes;
    return 0;
}