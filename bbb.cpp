


#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(void)
{
	 int a = 1;int b = 1;
     int c = 2;
	 while( c <= 121)
	 {   
  
 	 	c = a+b;
        
        a = b;

 	 	b = c;

	 }
	 cout<<c<<endl;
}


