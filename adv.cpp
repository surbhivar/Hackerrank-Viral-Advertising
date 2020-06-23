#include <bits/stdc++.h>
using namespace std;

int main() {  
    int n,j,i,p;
    cin>>n;
    p=5;
    j=0;
    for(i=1;i<=n;i++)
        {
        p=p/2;
        j+=p;
        p*=3;
    }
    cout<<j<<endl;
    
    return 0;
}
