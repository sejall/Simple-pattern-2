#include <iostream>

using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"enter rows";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;

    }

    return 0;
}
