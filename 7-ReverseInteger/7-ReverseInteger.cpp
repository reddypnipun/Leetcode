// Last updated: 8/23/2026, 11:39:04 PM
#include <math.h>
#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        if(x == INT_MIN) return 0;
        bool isneg =false;
        int arr[15];
        long long sum=0;
        if(x<0) {isneg=true;
        x*=-1;}
        int i=0;
        while(x>0){
            arr[i]=x%10;
            x/=10;
            i++;
        }
        int c=0;
        for(int j=i-1;j>=0;j--){
            sum+=arr[j]*round(pow(10,c));
            c++;
        }
        if(isneg) sum*=-1;
        if(sum > INT_MAX || sum < INT_MIN) return 0;
        return sum;
    }
};