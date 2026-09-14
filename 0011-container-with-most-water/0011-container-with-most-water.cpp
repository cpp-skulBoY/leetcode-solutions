class Solution {
public:
    int maxArea(vector<int>& height) {
	    
	    int l=0;
	    int r=height.size()-1;
	    int best=min(height[l], height[r])*(r-l);
	    while(l<r){
		    if(height[l]<=height[r]) l++;
		    else r--;
		    best=max(best, min(height[l], height[r])*(r-l));

	    }
	    return best;
    }
};