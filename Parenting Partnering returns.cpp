#include<bits/stdc++.h>
using namespace std;

class Pair{
    public:
    int s;
    int e;
    int num;
    Pair(int s,int e,int num){
        this->s=s;
        this->e=e;
        this->num=num;
    }
    
   
    
    bool operator<(const Pair &p1)const{
        return this->s<p1.s;
    }
};
int main(){
    long long int test;
    cin>>test;
    for(long long int m=1;m<=test;m++){
        
        long long int n;
        cin>>n;
        vector<Pair> act;
        for(long long int i=0;i<n;i++){
            long long int s,e;
            cin>>s>>e;
            Pair p(s,e,i);
            act.push_back(p);
        }
        
        vector<Pair > temp=act;
        sort(temp.begin(),temp.end());
        long long int flag=0;
        long long int c_end=INT_MIN,j_end=INT_MIN;
        unordered_map<string,char> ans;
        
        //try
        //for(int i=0;i<n;i++)
         // cout<<temp[i].s<<" "<<temp[i].e<<endl;
        for(long long int i=0;i<n;i++ ){
            if(temp[i].s>=c_end){
                c_end=temp[i].e;
                string s="";
                s+=to_string(temp[i].s);
                s+=to_string(temp[i].num);
                ans[s]='C';
            }
            else if(temp[i].s>=j_end){
                j_end=temp[i].e;
                string s="";
                s+=to_string(temp[i].s);
                s+=to_string(temp[i].num);
                ans[s]='J';
            }
            else
             {
                 flag=1;
                 break;
             }
              
        }
        
        
        cout<<"Case #"<<m<<": ";
        if(flag==0){
        for(long long int i=0;i<n;i++){
            string s=""; 
            s+=to_string(act[i].s);
             s+=to_string(act[i].num);
            cout<<ans[s];
        }
        cout<<endl;
        }
        else{
            cout<<"IMPOSSIBLE"<<endl;
        }
        
        
    }
}
