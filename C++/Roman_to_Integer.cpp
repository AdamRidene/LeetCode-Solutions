class Solution {
public:
    int romanToInt(string s) {
        auto sum=0;
        map<char,int> roman;
        roman['I']=1;roman['V']=5;roman['X']=10;roman['L']=50;roman['C']=100;roman['D']=500;roman['M']=1000;
        for(auto it=s.begin();it!=s.end();it++)
        {
            if (roman[*it] < roman[*(it+1)])
            {
                int op=abs(roman[*(it+1)]-roman[*it]);
                sum=sum+op;
                it++;
            }else
            {
                sum=sum+roman[*it];
            }
        }
        return sum;

        
    }
};