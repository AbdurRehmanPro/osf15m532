#include <pthread.h>
#include <stdio.h>

void *func(void *arg)
{
	int i = 0;
	int total=0;
	int *a=(int*)arg;
for(i=0;i<10;i++)
	{
		total=total+a[i];;
	}
	return ((void*)total);
}

int main()
{
	int tsum = 0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0;
	int arr[100];int i=0;
	for(i=0;i<100;i++)
	{
printf("Enter 100 numbers:");
scanf("%d",&arr[i]);
}
	pthread_t t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
pthread_create(&t1,NULL,func,(void*)(arr));
pthread_create(&t1,NULL,func,(void*)(arr+10));
pthread_create(&t1,NULL,func,(void*)(arr+20));
pthread_create(&t1,NULL,func,(void*)(arr+30));
pthread_create(&t1,NULL,func,(void*)(arr+40));
pthread_create(&t1,NULL,func,(void*)(arr+50));
pthread_create(&t1,NULL,func,(void*)(arr+60));
pthread_create(&t1,NULL,func,(void*)(arr+70));
pthread_create(&t1,NULL,func,(void*)(arr+80));
pthread_create(&t1,NULL,func,(void*)(arr+90));
pthread_join(t1,(void**)&sum1);
pthread_join(t1,(void**)&sum2);
pthread_join(t1,(void**)&sum3);
pthread_join(t1,(void**)&sum4);
pthread_join(t1,(void**)&sum5);
pthread_join(t1,(void**)&sum6);
pthread_join(t1,(void**)&sum7);
pthread_join(t1,(void**)&sum8);
pthread_join(t1,(void**)&sum9);
pthread_join(t1,(void**)&sum10);
tsum=sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10;
	printf("Final Sum After all threads: %d\n",tsum);
}


