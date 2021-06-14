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


/* int min(int arr[],int count)
{
  int minn=0;
  for(int i=0;i<count;i++)
  {
    if(arr[i] < minn)
    {
      minn = arr[i];
    }
  }
  return minn;
} */

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
