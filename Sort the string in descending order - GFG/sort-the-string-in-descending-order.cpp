// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}
// } Driver Code Ends



string ReverseSort(string str){
    //complete the function here
    sort(str.begin(),str.end());
    int start=0,end=str.length()-1;
    while(start<end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;
}