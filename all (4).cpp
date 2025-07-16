#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
//finding sum of all the elements in array 

int arr[10],sum=0;
cout<<"enter numberss:"<<endl;
for(int i=1;i<=10;i++)
{
    cin>>i;
    sum = sum+=i;
}
cout<<"the total sum is:"<<sum;
return 0;
}
