#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	
	int n,m,a;
	cout<<"n=";cin>>n;
	cout<<"m=";cin>>m;
	cout<<"a=";cin>>a;
	
	int j=0;
	
	for(int i=n;i<=m;i++){
		for (int k=i;k>=1;k/=10){
			j=j+k%10;
			
		}
		if(a%i==0&&j<=a){
			cout<<"i="<<i<<"\n";
			
		}
	j=0;
	}
}
