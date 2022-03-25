#reading list :
arr=list(map(int,input().split()))
#
arr=[int(i) for i in input().split()]
#Takes less complexity

# a/2 or a>>1 same

Linear Search:
#1.
target=int(input())
for i in range(len(arr)):
	if(arr[i]==target):
		print("Found")
		break
else:
	print("Not found")

#2.
target=int(input())
status=False
for i in range(len(arr)):
	if(arr[i]==target):
		status=True
		break
if(status):
	print("Found")
else:
	print("Not found")






Binary search  :



vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       vector<long long int> product;
       long long int p=1;
       long long int ignore = 0;
       long long int j = 0;
       while(j<n)
       {
       for(long long int i=0; i<n; i++)
       {
         if(i==ignore)
         {
             continue;
         }\ 
         else
         {
            p = p*nums[i]; 
         }
       }
       product.push_back(p);
       j++;
       ignore++;
       p=1;
       } 
            return product;
   }
 

};