class Solution {
public:
    int subtractProductAndSum(int n) {
        int add=0,multi=1,a,subtract;
        while(n!=0){
            a=n%10;
            multi*=a;
            add+=a;
            n/=10;
        }
        subtract=multi-add;
        return subtract;
    }
};