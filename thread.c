#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *funct(void *arg)
{

      int i=0, total=0;
      int *a=(int *)arg;
      for(i; i<10;i++)
	  {
		  total=total+a[i];
      }
	  
	  return ((void*)total);
	  
}

int main()

{
	int Tsum=0, sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0;
	
	int arr[100]; 
	int i=0;
	for(i;i<100;i++)
	{
		printf("Enter 100 numbers (one by one)");
		scanf("%d", &arr[i]);
	}
	
	pthread_t t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
	pthread_create(&t1,Null,funct,(void *)(ar));
	pthread_create(&t2,Null,funct,(void *)(ar+10));
	pthread_create(&t3,Null,funct,(void *)(ar+20));
	pthread_create(&t4,Null,funct,(void *)(ar+30));
	pthread_create(&t5,Null,funct,(void *)(ar+40));
	pthread_create(&t6,Null,funct,(void *)(ar+50));
	pthread_create(&t7,Null,funct,(void *)(ar+60));
	pthread_create(&t8,Null,funct,(void *)(ar+70));
	pthread_create(&t9,Null,funct,(void *)(ar+80));
	pthread_create(&t10,Null,funct,(void *)(ar+90));
	
	pthread_join (t1,(void **) &sum1)
    pthread_join (t2,(void **) &sum2)
	pthread_join (t3,(void **) &sum3)
	pthread_join (t4,(void **) &sum4)
	pthread_join (t5,(void **) &sum5)
	pthread_join (t6,(void **) &sum6)
	pthread_join (t7,(void **) &sum7)
	pthread_join (t8,(void **) &sum8)
	pthread_join (t9,(void **) &sum9)
	pthread_join (t10,(void **) &sum10)


Tsum= sum1+sum2+sum3+sum4;+sum5;+sum6+sum7+sum8+sum9+sum10;

printf("Total Sum is: %d", Tsum);




	
}
