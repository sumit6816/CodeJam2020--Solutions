#include<bits/stdc++.h>
using namespace std;
string paren(string s){
    
    int prev=0;
    string ans="";
    for(int i=0;i<s.size();i++){
        int diff=(s[i]-'0')-prev;
        if(diff>=0){
            while(diff--)
               ans+='(';
        }
        else{
            while(diff++)
              ans+=')';
        }
        ans+=s[i];
        prev=s[i]-'0';
    }
    
    int last=0-(s[s.size()-1]-'0');
    while(last++)
    ans+=')';
    return ans;
}
int main(){
    int test;
    cin>>test;
    for(int m=1;m<=test;m++){
        string s;
        cin>>s;
        
        string ans=paren(s);
        cout<<"Case #"<<m<<": "<<ans<<endl;
    }
}
