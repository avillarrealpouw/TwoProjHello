// TwoProjHello.cpp : Defines the entry point for the console application.
//
#include "Hello1.h"


int _tmain(int argc, _TCHAR* argv[])
{
	for(int i=0;i<100;i++){
		printf("This is Hello 1 %d\n",i);
	}
	int i=0;
	while(i<100){
		printf("This is Hello 1b %d\n",i++);
	}
	return 0;
}

