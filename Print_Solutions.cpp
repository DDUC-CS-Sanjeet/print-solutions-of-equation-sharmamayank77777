#include<iostream>
#include<math.h>
using namespace std;
int check(int num)
{
	int r,s,sum=0;
	while(num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	return sum;
}
int main()
{
	int digit,sum,flag=-1;
	cout<<"Enter number of digits:";
	cin>>digit;
	cout<<"\nEnter sum:";
	cin>>sum;
	cout<<"\nPossible Combinations are:\n";
	for(int i=0;i<pow(10,digit);i++)
	{
		int res=check(i);
		if(res==sum)
		{	flag=0;
			int r,count=0,s=i;
			while(s!=0)
			{
				s=s/10;
				++count;
			}
			if(count<digit)
			{
				for(int j=1;j<=digit-count;j++)
				cout<<"0";
			}
			cout<<i;
			cout<<"\n";
		}
		
	}
	if(flag!=0)
	cout<<"Not exist in given number of digits!!";
	return 0;
}
