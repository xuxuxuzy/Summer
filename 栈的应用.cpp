#include<bits/stdc++.h>
using namespace std;
stack <char> st;
int main()
{
    string line;
    while (cin>>line)
    {
        int a=0;
        st.push(line[0]);
        for (int i=1;i<line.size();i++){
            st.push(line[i]);
            while(st.size()>1){
                char ch=st.top();
                st.pop();
                char str=st.top();
                st.pop();
                if(ch==str){
                    if(ch=='O') continue;
                    else st.push('O');
                }
                else{
                    st.push(str);
                    st.push(ch);
                    break;
                }
            }
        }
        string b;
        while (!st.empty())
        {
            char ch=st.top();
            st.pop();
            b=ch+b;
        }
        cout<<b;
        cout << endl;
    }
    return 0;
}
