class Solution {
public:
    int sumsquared(int n)
    {
        auto num=to_string(n);
        auto sum=0;
        for(auto it=num.begin();it!=num.end();it++)
        {
            sum=sum+pow((*it)-'0',2);
        }
        return sum;
    }
    bool isHappy(int n)
    {
        if (n==1)
        {
            return true;
        }else
        {
            set<int> visited;
            int start=n;
            while(visited.find(start)==visited.end())
            {
                visited.insert(start);
                start=sumsquared(start);
                if (visited.find(start)!=visited.end())
                {
                    return false;
                }
                if(start==1)
                {
                    return true;
                }

            }
        }
        return 0;
    }
};