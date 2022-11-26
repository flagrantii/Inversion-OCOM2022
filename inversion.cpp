#include<bits/stdc++.h>
using namespace std;

int check(int arr[],int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j && arr[i]>arr[j]){
				cnt++;
			}
		}
	}
	return cnt;
}

main(){
	int n,arr[n];cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<check(arr,n);
}
