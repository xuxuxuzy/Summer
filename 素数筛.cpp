
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

bool Is_prime(int n)//ÆÕÍ¨ÅĞ¶ÏËØÊı

{

    for(int i=1;i*i<=n;++i)

    {

        if(n%i==0) return false;

    }

    return true;

}

#define maxn 10000000

bool vis[maxn];

int prime[maxn],x;

void isprime(int n) //°£ÊÏÉ¸

{

    for(int i=2;i<=n;i++)

    {

        if(!vis[i]) prime[x++]=i;

        for(int j=2;j*i<=n;j++)

        {

            vis[i*j]=true;

        }

    }

}

void oulasai(int n)  //Å·À­É¸

{

    for(int i=2;i<=n;i++)

    {

        if(!vis[i]) prime[x++]=i;

        for(int j=0;j<x;j++)

        {

            if(i*prime[j]>n) break;

            vis[i*prime[j]]=true;

            if(i%prime[j]==0) break;

        }

    }

}

int main()

{

    int n;

    scanf("%d",&n);

    oulasai(n);

    for(int i=0;i<x;i++)

        printf("%d\n",prime[i]);

    return 0;

}

