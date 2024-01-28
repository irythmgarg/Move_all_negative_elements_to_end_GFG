//Move_all_negative_elements_to_end
/*
Given an unsorted array arr[] of size N having both negative and positive integers.
 The task is place all negative element at the end of array without changing the order of*/
//positive element and negative element.

/*
Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5
*/
#include<iostream>
using namespace std;
#include<vector>
int main()
{
     int n;
     cin>>n;
     int a[n];
     vector<int>k;// extra space 
     for (int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     int i=0;//1st pointer
     int j=0;//2nd pointer
     while(i<n)
     {
          if(a[i]>0)//positive elements 
     {
          a[j]=a[i];
          j++;
     }   else if(a[i]<0)
          {
               k.push_back(a[i]);//-Ve elements
          }
          i++;
     }
for (int i = 0; i < k.size(); i++)  // put -ve elements back to array
{
        a[j++] = k[i];
    }
 for(int i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }


}