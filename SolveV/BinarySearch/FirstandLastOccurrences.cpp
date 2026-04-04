class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int lf=-1,rf=-1;
        auto it = lower_bound(arr.begin(),arr.end(),x);
        if(*it != x){
            return {-1,-1};
        }
        lf = it - arr.begin();
        it = upper_bound(arr.begin(),arr.end(),x);
        rf = it - arr.begin()-1;
        return {lf,rf};
    }
};
