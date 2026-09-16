class Solution {
public:
    int mySqrt(int x) {
        long long int start=0;
        long long int end=x;

        while(start<=end){
            long long int mid=start+(end-start)/2;

            if(mid*mid == x){
                return mid;
            }
            else if( mid*mid < x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return end;
    }
};