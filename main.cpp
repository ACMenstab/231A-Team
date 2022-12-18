#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,r,i,j,e,f;
   cin>>n;
   r=0;
   for(i=0;i<n;i++)
       {e=0;
       for(j=0;j<3;j++)
          {cin>>f;
           e+=f;}
       if (e>1)
          r+=1;
       }
   cout<<r;       
}
