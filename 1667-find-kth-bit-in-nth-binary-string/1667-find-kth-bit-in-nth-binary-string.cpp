class Solution {
public:    
    
   int form(int n, int k){
        if(n == 1 && k == 1) 
            return 0;
       
        int mid = (1 << (n-1));
       
        if(k < mid) 
            return form(n - 1, k);
        else if(k == mid) 
            return 1;
        else 
            return !( form(n - 1, (mid << 1) - k));
    }
    
    char findKthBit(int n, int k) {                       
        return (form(n,k) + '0');
    }
};





















// class Solution {
// public:
//     string invert(string x){
//         for(int i=0; i<x.size(); i++){
//             if(x[i]=='0') x[i] ='1';
//             else x[i] ='0';
//         }            
//         return x;
//     } 
//     string formsequence(int n)
//     {
//         if(n==0)
//         {
//             return "0";
//         }
//         string s = formsequence(n-1);
//         string result = "";

//         //compute formsequence
//         string rev = invert(s);
//         reverse(rev.begin(),rev.end());
//         result = s + "1" + rev;

//         return result;
//     }
//     char findKthBit(int n, int k) {
//         return s = formsequence(n)
//         return s[k-1];
//     }
// };