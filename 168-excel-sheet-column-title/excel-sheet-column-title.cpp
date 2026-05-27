class Solution {
public:
    string convertToTitle(int columnNumber) {
       string s = "";

       while(columnNumber > 0)
       {
        columnNumber--; //because in excel column are 1 based not 0 based (HINT) Kyuki % 26 ka formula 0-based indexing pe kaam karta hai 
        int rem = columnNumber % 26 ;
        s += (rem + 'A');
        columnNumber = columnNumber / 26;

       }
        reverse(s.begin() , s.end());
       return s;
    }
};