#include <bits/stdc++.h>
using namespace std;
string helper(string arr){
    if(arr.size()==1){
        if(arr[0]=='9')  return arr;
    }
    for(int i=0;i<arr.size();i++){
        int digit=arr[i]-'0';
        if((9-digit) < digit){
            if(i==0 && arr[i]=='9'){
                arr[i]='9';
            }
            else arr[i]='0'+9-digit;
        }
    }
    return arr; 
}
int main() {
  string n;
  cin>>n;
  cout<<helper(n);

    return 0;
}