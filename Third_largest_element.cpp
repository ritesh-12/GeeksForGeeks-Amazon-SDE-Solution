// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         if (n<3)
         {
             return -1;
             
         }
         int fir = a[0],sec = INT_MIN,third = INT_MIN;
         for(int i =1;i<n;i++)
         {
             if (a[i]>fir)
             {
                 third = sec;
                 sec = fir;
                 fir = a[i];
                 
             } 
             else if (a[i]>sec)
             {
                 third= sec;
                 sec = a[i];
             }
             else if(a[i]>third)
             {
                 third = a[i];
             }
         }
         return third;
         
    }

};
 
int main()
{
    int p;
    cin>>p;
    while(p--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     