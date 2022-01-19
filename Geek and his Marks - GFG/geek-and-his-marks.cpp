#include<iostream>
using namespace std;
int main()
 {
	//code
	int t; cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int X;
	    cin>>X;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int count =0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>X)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}