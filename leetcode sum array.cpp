#include <bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {1,4,2,5,3};
vector<int>test;

int i, j, k, n, sum;
n = *(&arr+1)-arr;

sum=0;

for(i=0; i<n; i++){
	for(j=i; j<n; j++){
		for(k=i; k<n; k++){
			sum+=arr[k];
		}
	}
}




cout<<sum<<endl;



}
