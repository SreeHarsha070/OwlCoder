#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    int n ;
    cin>>n;
    map<int,int>mp ;
    unordered_map<int,int>mp1 ;
    for( int i = 0 ; i < 5 ; i+=1 ){
        int t ;
        cin>>t;
        mp[t] +=1 ;
        mp1[t] +=1;
    }
    cout<<"Map elements \n";
    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    cout<<"Unordered_map elements\n";
    for(auto it : mp1){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    for(int i =0 ; i < 26 ; i+=1 ){
        cout<<char(i+'a')<<" ";
    }
}



