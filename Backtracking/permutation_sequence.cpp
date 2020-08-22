#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	const int M = 11;
	string s;
	string ans;
	vector<int>fact;
	Solution()
	{
		 ans;
		 fact.push_back(1);
		 for(int i = 1;i<=10;i++){
		 	fact.push_back(fact[i-1]*i);
		 }
	}
    string getPermutation(int n, int k) {           
           
           for(int i = 0;i<=n;i++)
           s.push_back(i+48);

           util(n , k);
           return ans;
    }
    void util(int n , int k)
    {
         if(s.size() == 2)
         {
         	 ans.push_back(s[1]);return;
         }

         int pos = k/fact[n-1];

         if(k%fact[n-1]!=0)
         	pos++;

         ans.push_back(s[pos]);

         s.erase(s.begin()+pos);

         int rem = k - (pos-1)*fact[n-1];

         util(n-1 , rem);

    }
};

int main()
{
	 int n,k;
	 cin>>n>>k;
	 Solution *ob = new Solution();
     string s = ob->getPermutation(n,k);
     cout<<s<<endl;

}

