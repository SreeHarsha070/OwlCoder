// c++ and stl basics
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long int n1;
	long long int n2;
	float f;
	double f1;
	char c;
	bool d=true;
	bool k = false;
	string s;
	string s1="Hi";
	int arr[100];
	//arrays are static in cpp
	// we prefer vector for this reason
	vector<int>v;
	// vector are dynamic allocation
	v.push_back(10);
	v.emplace_back(15);
	// push_back and emplace_back are same but emplace_back is much faster in execution
	cin>>n;
	// to read data
	cin>>n1>>n2;
	cout<<n1<<n2;
	// to read an array:
	int n;
	cin>>n;
	int arr[n];
	// declare an array of length n
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\n";
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	vector<int>ds(n,10);
	// makes all values as 10
	int x;
	// ways of for loop on vector
	//way-1 : using range n
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		ds.emplace_back(x);
	}
	//way-1  -using size() of vector
	for(int i=0;i<ds.size();i++){
		cout<<ds[i]<<endl;
	}
	
	// way -2 - iterator loop 
	for(vector<int>it = ds.begin();it!=ds.end();it++){
		cout<<*it;
	}
	//way-3 - simplification of way-2
	for(auto it:ds){
		cout<<it;
	}
	// other functions on vector :
	//rbegin(),rend() work reverse way
	// sort() function on vector :
	sort(ds.begin,ds.end());
	// sorting in ascending order
	sort(ds.begin(),ds.end(),greater<int>());
	// sorting in descending order
	// sorting on array :
	sort(arr,arr+size_of_array);
	auto it= find(ds.begin(),ds.end(),target);
	// find() to find if target element is present in vector
	if(it!=ds.end()){
		cout<<*it;
	}
	// lower_bound and upper_bound
	//lower bound gives equal or greater element position
	// upper bound gives position of elment just greater than target element
	int ind=lower_bound(ds.begin(),ds.end(),X)-ds.begin();
	// pop_back()->removes last element
	v.pop_back();
	v1.swap(v2);
	//swap data of two vectors
	ds.clear();
	// erase all the elements of the vector
	cout<<ds.empty();
	// gives true if vector is empty
	v.erase(v.begin());
	// erasing data  based on its address
	v.erase(v.begin+1,v.begin+3);
	//{10,20,30,40}=>{10,40}
	v.insert(v.begin(),300);
	// 300 inserted at begin
	v.insert(v.begin()+1,2,10);
	// inserting tw0 10's at second
	v.insert(v.begin(),copy.begin(),copy.end());
	// to insert a vector into current vector
	
}
