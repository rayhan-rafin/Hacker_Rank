#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int n,i;
    unsigned long long int x,sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        cout<<sum<<endl;
        sum=sum+x;
    }
    cout<<sum<<endl;
    return 0;
}
