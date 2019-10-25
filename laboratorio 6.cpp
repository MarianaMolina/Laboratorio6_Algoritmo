#include <stdio.h> 
#include <iostream>

using namespace std;

int e1=2,e2=4,x1=3,x2=2;
int a1[6]={7,9,3,4,8,4};
int a2[6]={8,5,6,4,5,7};
int t1[5]={2,1,1,2,4};
int t2[5]={2,3,2,3,1};

void fastestway_reverse(int f1, int f2){
	f1[0]=e1+a1[0];
	f2[0]=e2+a2[0];
	
	
	for (int j=1;j){
		if(f1[j-1]+a1[j]<=f2[j-1]+t2[j-1]+a1[j]){
			f1[j]=f1[j-1]+a1[j];
		}
			
		else{
			f1[j]=f2[j-1]+t2[j-1]+a1[j];
		} 
	}
}

int main(){
	int f1[6], f2[6];
	fastestway_reverse(f1,f2);
}
