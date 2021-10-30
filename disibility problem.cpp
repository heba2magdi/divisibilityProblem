#include<bits/stdc++.h>
using namespace std;
int main() {
	
	int t , a , b ,count,c;
	cin>>t;
	for(int i =0;i<t;i++){
		cin>>a>>b;
		if((a%b!=0)&&(a>b))
		{
			c=a%b;
			cout<<b-c<<endl;
			continue;
		}
		if(a%b==0)
		{
			cout<<"0"<<endl;
			continue;
		}
		if(a<b)
		{
			cout<<b-a<<endl;
			continue;
		}
	}
	
}
