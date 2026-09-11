class Solution {
public:
    string convert(string s, int numRows) {
vector<string> rows(numRows);
string res;
int count = -1;
int i = 0;
if(numRows>1){
for (char ch : s) {
    rows[i].push_back(ch);
    if (i == 0 || i == numRows - 1) {
        count = -count;

    }
    i += count;
}
for(string t: rows){
    res+=t;
}}
else {res =s;}
return res;
    }    
};