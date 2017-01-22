#include<iostream>
#include<math.h>
using namespace std;
int val(int number,int posfromend)
{
  int temp;
  for(int i=0;i<posfromend;i++)
  {
    temp=number%10;
    number=number/10;
  }
  return temp;
}
int main(){
  int t,n,temp,count,num,i,j,incrementer;
  cin>>t;
  while(t--)
  {
    cin>>n;
    cin>>num;
    int lis[n],counter[n];
    lis[0]=1;
    int sum=pow(10,n-1);
    for(i=n-1;i>0;i--)
    {
      incrementer=0;
      counter[i]=0;
    temp=val(num,i);
    count=1;
    for(j=n;j>i;j--)
    {

      if(temp<val(num,j))
      break;
      if(temp==val(num,j))
      {
      	incrementer++;
        continue;
	  }
    else
    {
	  count++;
    counter[i]=counter[i]+counter[j];
  }
    }
    if(counter[i]<count)
    lis[n-i]=count-counter[i];
    else
    lis[n-i]=count;
    sum=sum+lis[n-i]*pow(10,i-1);
    counter[i]=counter[i]+incrementer;
  }
  for(i=0;i<n;i++)
  cout<<lis[i];
  cout<<"\n"<<sum;
  }
return 0;
}
//1531
//4321
//
