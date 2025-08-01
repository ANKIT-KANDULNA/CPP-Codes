#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        long long k;
        cin>>k;
        vector<long long> power(19,1);
        for(int i=1;i<=18;i++){
            power[i]=power[i-1]*10;
        }
        long long numDigits=0;
        long long digitlen=0;
        long long prev=0;
        for(int i=1;i<=18;i++){
            digitlen+=(power[i]-power[i-1])*i;
            if(digitlen>=k){
                numDigits=i;
                break;
            }
            prev=digitlen;
        }
        long long low=power[numDigits-1];
        long long high=power[numDigits]-1;
        long long ans=0;
        long long startpos=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long startdig=(mid-power[numDigits-1])*numDigits+prev+1;
            if(startdig<=k){
                if(mid>ans){
                    ans=mid;
                    startpos=startdig;
                }
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        string n=to_string(ans);
        cout<<n[k-startpos]<<endl;
    }
    return 0;
}