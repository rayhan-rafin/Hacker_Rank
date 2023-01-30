#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        count=count+x;
    }
    cout<<count<<endl;
    return 0;
}
