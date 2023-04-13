#include "bits/stdc++.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "/home/mokunhua/code/sniper/sniper/include/sim_api.h"

//using namespace std;

int main(){
	//for(int i=0; i<10; i++) cout<<"hello "<<i<<endl;
	SimRoiStart();
	for(int i=0; i<10; i++) printf("hello %d\n", i);
	//delta array
	//SimRoiStart();
	int arr[]={0,1,2,3,3,8,5,7};
	for(int i=7; i>0; i--) arr[i]-=arr[i-1];
	for(int i=0; i<8; i++) printf("%d ",arr[i]);
	printf("\n");
	SimRoiEnd(); 
	return 0;
}
