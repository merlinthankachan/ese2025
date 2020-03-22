// Cpp program to play game to guess number using pthreads.//
**************************************************************
	
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>


int a;
int b=0;

void *binary_search (void *val){
	int *num1 = (int *)val;
	int first = 0;
	int last = 1001;
	int mid = (first+last)/2;
	while(1){
		if ((a>mid) && (a<last) )
			first = mid;
		else if ((a>first) && (a<mid))
			last = mid;
		mid = (first+last)/2;
		*num1 = mid;
		b++;
	}
}

int main(){

	int p;
	srand(time(0));
	a = (rand() % 1000);
	printf("The number to be guessed is %d\n",a);
	pthread_t p1;
	if (pthread_create (p1,NULL,&binary_search,&p) !=0)
		printf("Thread is not created\n");
while(1){
	if((p=a) && (b<50))
		{
		printf("Player 1 wins in %d chances\n",b);

	break;}
	else
		{printf("Player 1 losts in %d chances\n",b);
	break;
		}
	usleep(10000);
}

return 0;
}
