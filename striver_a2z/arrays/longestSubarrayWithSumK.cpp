class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int maxi = 0;
        int sum = 0;
        map<int, int> psum;
        
        for(int i = 0; i < N; i++){
            sum += A[i];
            if(sum == K){
                maxi = max(maxi, i+1);
            }
            int rem = sum - K;
            if(psum.find(rem) != psum.end()){
                int cur = i - psum[rem];
                maxi = max(maxi, cur);
            }
            if(psum.find(sum) == psum.end()){
                psum[sum] = i;
            }
        }
        return maxi;
        
    } 

};