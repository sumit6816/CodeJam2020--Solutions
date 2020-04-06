#include<bits/stdc++.h>
using namespace std;

void latin(int N,vector<vector<int> > &arr,int test){
    int trace=0;
        //int row[N]={0},col[N]={0};
       int r=0,c=0;
       unordered_set<int> sett;
        for(int i=0;i<N;i++){
               sett.clear();
            for(int j=0;j<N;j++){
                if(sett.find(arr[i][j])!=sett.end()){
                    r++;
                    break;
                }
                else{
                    sett.insert(arr[i][j]);
                }
            }
        }
        
        
         for(int i=0;i<N;i++){
             sett.clear();
            for(int j=0;j<N;j++){
                if( sett.find(arr[j][i])!=sett.end()){
                    c++;
                    break;
                }
                else{
                    sett.insert(arr[j][i]);
                }
            }
        }
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
               if(i==j)
                trace+=arr[i][j];
            }
        }
        
   cout<<"Case #"<<test<<": "<<trace<<" "<<r<<" ";
        cout<<c;
    }
        

int main(){
    int test;
    cin>>test;
    for(int m=1;m<=test;m++){
        int N;
        cin>>N;
        
        vector<vector<int> > arr(N,vector<int>(N)) ;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>arr[i][j];
            }
        }
        
        latin(N,arr,m);
        cout<<endl;
        
        
    }
}
