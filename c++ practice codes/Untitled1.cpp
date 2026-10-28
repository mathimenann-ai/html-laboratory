class Solution {
public:
    int romanToInt(string s) {
        int sum =0,len=s.length();
        int i=1,v=5,x=10,l=50,c=100,d=500,m=1000;
        for (int i=0;i<len;i++){
        
                if (tolower(s[i])>=tolower(s[i+1])){
                   sum=sum+tolower(s[i]);
                }
                
                else {
                   int container =s[i+1]-s[i];
                    sum=sum+container;
                    i++;
                }

            
        }
        
            
        
        return sum;

    }
};