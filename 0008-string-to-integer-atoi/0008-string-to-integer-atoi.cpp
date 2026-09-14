class Solution {
public:
    int myAtoi(string s) {
        bool minus = false;
        
        for(int i=0; i<s.size();++i){
            if(s[i]==' ') continue;
            if(s[i]!=' '){
                s.erase(0,i);
                break;
            }
        }
        if(s[0]=='-'){
            minus=true;
            s.erase(0,1);
        }
        else if(s[0]=='+') s.erase(0,1);
        
        long long x=0;
        int min=-2147483648;
        int max=2147483647;
        
        while(!s.empty() && s[0] == '0') {
            s.erase(0, 1);
        }
        if(s.empty() || !isdigit(s[0])){return 0;}
        for(int i = 0; i < s.size(); ++i) {
            if(!isdigit(s[i])) {
                s.erase(i);
                break;
        }
    }
        if(s.size()>10 && minus)
        {
            return min;
        }
        if(s.size()>10 && !minus){
            return max;}
        string maxInt="2147483647";
        string minInt="2147483648";
        if(s.size()==10){
            if(minus){
                for(int i=0;i<10;++i){
                    if(s[i]-'0'>minInt[i]-'0')return min;
                    if(s[i] -'0'<minInt[i]-'0') break;
                }
            }
            else{
                for(int i=0;i<10;++i){
                    if(s[i]-'0'>maxInt[i]-'0')return max;
                    if(s[i]-'0'<maxInt[i]-'0') break;}
            }
        }
        for(int i=0;i<s.size(); ++i){
            if(!isdigit(s[i])){break;}
            x*=10;
            x+=(s[i]-'0');
        }
        if(minus){return -1*x;}
        else{return x;}
    }
};