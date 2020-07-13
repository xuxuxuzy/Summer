#include<iostream>
#include<algorithm>
using namespace std;
//自定义排序函数
bool cmp(string a,string b)
{
    return a+b>b+a;//如果a+b>b+a，则把a排在前面，否则将b排在前面
}
int main()
{
    int n;
    cin>>n;
    string s[n];
    //获取n个正整数，存入字符串数组a中
    for (int i = 0; i < n; ++i)
    {
        cin>>s[i];
    }
 
    sort(s,s+n,cmp);
    for (int i = 0; i < n; ++i)
    {
        cout<<s[i];
    }
    return 0;
}
