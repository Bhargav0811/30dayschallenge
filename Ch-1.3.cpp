class Solution {
public:
    int A[10];
    int B[10];
    string getHint(string s, string g) {
        int y=0,x=0,i;        
        int n = s.length(),a,b;
        for(i=0;i<n;i++)
        {
            a = s[i]-'0';b = g[i]-'0';
            if(a==b)y++;
            else 
            {                
                A[a]++;
                B[b]++;
            }            
        }
        for(i=0;i<10;i++)
        {
            x+=min(A[i],B[i]);
        }
        string temp=to_string(y)+"A"+to_string(x)+"B";
        // temp+=(char)('0'+y);
        // temp+="A";
        // temp+=(char)('0'+x);
        // temp+="B";
        return temp;
    }
};
