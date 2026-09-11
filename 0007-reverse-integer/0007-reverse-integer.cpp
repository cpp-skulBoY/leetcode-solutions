class Solution {
public:
    int reverse(int x) {
        
    string s = to_string(x);
    if (x < 0) {
        std::reverse(s.begin() + 1, s.end());
    } else {
        std::reverse(s.begin(), s.end());
    }
    long long a=stoll(s);
    if(a<=2147483647 && a>=-2147483648){
        x=a;
    }
    else x=0;

    
    return x;
    }
};