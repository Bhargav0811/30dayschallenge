class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n,int x=10) {
        vector<vector<int>> A;
        if(k==1)
        {
            if(n>=1 && n<x)A.push_back({n});            
            return A;
        }
        int i=(k*(k-1))/2,j;
        vector<int> S;
        j=min(x-1,n);
        for(;j>=2;j--)
        {
            // if((n-j)<=i)
            // {
                vector<vector<int>> v = combinationSum3(k-1,n-j,j);
                if(v.size()>0)
                {
                    for(auto ite:v)
                    {
                        ite.insert(ite.begin(),j);
                        A.push_back(ite);
                    }
                }
            // }
        }
        return A;
    }
};
