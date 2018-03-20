#include<bits/stdc++.h>
using namespace std;

 
int main(){
 
long long int t;
cin>>t;
while(t--){
  string s;
  cin>>s;
  char c;
  long long int odd_count = 0,odd_index=0,k=0,index;
  long long int len = s.length();
  char str[len];
  bool visited[len+3]={0};
  long long int count[26]={0};
  vector<long long int >v;
  //Storing char count and finding the character which is present odd number of times
  for(long long int i=0;i<len;i++)
  count[s[i]-'a']+=1;
  for(long long int i=0;i<26;i++){
   if(count[i] & 1){
    odd_count+=1;
     c = 97+i;
  } 
}
if((len%2==0 && odd_count!=0 ) || (len%2!=0 && odd_count>1 ) )
cout<<-1<<"\n";
else {
  //Finding the palindrome string
  str[len/2] = c;
  for(long long int i=0;i<26;i++){
    if(count[i]>0) 
      { 
        for(long long int j=0;j<count[i]/2;j++)
          { 
            char x = i+97;
            str[k]=str[len-1-k]=x;
            k++;
          } 
        } 
      }
  str[len]='\0'; //palindrome string
  string t(str);
  char original[len];//original string
  strcpy(original, s.c_str());
  //cout<<original<<"\n";
for(long long int i = 0;i<len;i++){
   if(str[i] == original[i]){
    v.push_back(i+1);
    //visited[i]=1;
    original[i]='@';
   }
   else {
    char p = str[i];
    for(long long int i=0;i<len;i++){
      if(original[i]==p){
        index = i;
        break;
      }
    }
    v.push_back(index+1);
    original[index]='@';
   }
}
for(long long int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
    cout<<"\n"; 
}
 
}
 return 0;  
}