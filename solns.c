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
  int minn=0;
  for(int i=0;i<count;i++)
  {
    if(arr[i] < minn)
    {
      minn = arr[i];
    }
  }
  return minn;
}
