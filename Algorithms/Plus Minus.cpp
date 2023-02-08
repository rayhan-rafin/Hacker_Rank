#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x;
    float zero=0,pos=0,neg=0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        if (x==0){
            zero++;
        }
        else if (x<0){
            neg++;
        }
        else {
            pos++;
        }
    }
    cout<<fixed<<setprecision(6)<<(pos/n)<<endl<<(neg/n)<<endl<<(zero/n)<<endl;
    //use unsetf to unset
    //related info: https://www.geeksforgeeks.org/formatted-i-o-in-c/
    return 0;
}
