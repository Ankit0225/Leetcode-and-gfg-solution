// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}



// } Driver Code Ends


string sort(string str){
    //complete the function here
    sort(str.begin(), str.end());
     return str;
}