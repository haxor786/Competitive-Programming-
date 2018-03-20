#include<bits/stdc++.h>
using namespace std;
 
int main(){
 long long int t;
 cin>>t;
 while(t--){
    long long int n,m,x,k,current_count_months=1,patent_count=0,oc=0,ec=0;
    cin>>n>>m>>x>>k;
    string s;
    cin>>s;
    for(long long int i=0;i<s.length();i++){
        if(s[i]=='E')
            ec+=1;
        else if(s[i]=='O')
            oc+=1;
    }
    if(x==0)
        cout<<"no"<<"\n";
    else if(m==0)
        cout<<"no"<<"\n";
    else if(n>k)
        cout<<"no"<<"\n";
    else{
        while(patent_count < n) {
        if(oc==0 && ec==0)
            break;
        else if(current_count_months%2!=0){
            if(oc>=x){
                oc-=x;
                patent_count+=x;
            }
            else if(oc > 0){
                patent_count+=oc;
                oc=0;
            }
        }    
        else if(current_count_months %2 == 0){
            if(ec>=x){
                ec-=x;
                patent_count+=x;
            }
            else if(ec>0){
                patent_count+=ec;
                ec=0;
            }
 
        } 
        current_count_months+=1;
       }
        if(patent_count >=n && (current_count_months-1) <=m ){
            cout<<"yes"<<"\n";
            //cout<<current_count_months<<" "<<patent_count<<"\n";
            }
        else{
            cout<<"no"<<"\n";
            //cout<<current_count_months<<" "<<patent_count<<"\n";
            }
 
      
    }
 
 
 }
 
return 0;
} 