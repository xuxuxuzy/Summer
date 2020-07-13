#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,i,j;
    cin>>t>>m;
    int w[m+5],x[m+5];
    int f[t+5];
    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&x[i],&w[i]);
    }
    memset(f,0,sizeof(f));
    for(i=1;i<=m;i++)
    {
        for(j=t;j>=x[i];j--)
        if(x[i]<=t)
            f[j]=max(f[j-x[i]]+w[i],f[j]);
    }
    printf("%d\n",f[t]);
    return 0;
}
