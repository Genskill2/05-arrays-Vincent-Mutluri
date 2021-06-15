/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[],int count)
{
  int maxx=0;
  for(int i=0;i<count;i++)
  {
    if(arr[i] > maxx)
    {
      maxx = arr[i];
    }
  }
  return maxx;
}


 int min(int arr[],int count)
{
  int minn=arr[0];
  for(int i=1;i<count;i++)
  {
    if(arr[i] < minn)
    {
      minn = arr[i];
    }
  }
  return minn;
} 

float average(int arr[],int count)
{
  int sum=0;
  float avg=0.0;
  for(int i=0;i<count;i++)
  {
     sum += arr[i];
  }
  avg = sum/count;
  return avg;
}

int factors(int num,int arr[])
{
  int c=0;
  int k=0;
  for(int i=2;num>1;i++)
  {
    while(num%i==0)
    {
      c +=1;
      arr[k]=i;
      num = num/i;
      k++;
    }
  }
  return c;
}

int mode(int arr[],int n)
{
  int arr2[]={};
  int temp=0;
  for(int i=0; i<n; i++)
  {
    temp = arr[i];
    int count=0;
     for(int j=i+1; j<n; j++)
     {
       if(arr[j]==arr[i])
       {
         count++;
       }
     }
     arr2[i] = count;
  }
  int max=arr2[0];
  for(int k=0; k<n;k++)
  {
     if(arr2[k] > max)
     {
       max = arr[k];
     }
     else
     {
     max = arr[k];
     }
   }
   
   return max;
}
