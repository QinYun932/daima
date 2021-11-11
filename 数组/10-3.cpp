#include<stdio.h>
int main()
{
	void input(int * );
	void max_min_value(int * );
	void output(int *);
	int number[10];										
	input(number);												//调用输入10个数的函数 
	max_min_value(number);										//调用交换函数 
	output(number);												//调用输出函数 
	return 0; 
}

void input(int * number)
{
 int i;															//输入10个数的函数 
 printf("input 10 number:");
 for(i=0;i<10;i++)
 	scanf("%d",&number[i]);	
}

/*void max_min_value(int * number)								//交换函数 
{
	int * max,* min,* p,temp;
	max=min=number;												//开始时使max和min都指向第1个数 
	for(p=number+1;p<number+10;p++)
		if( * p>* max)
		 max=p;								//若p指向的数大于max指向的数，就使max指向p指向的大数 
		else
			if(* p<* min)
			min=p;							//若p指向的数小于min指向的数，就使min指向p指向的小数 
	temp=number[0];
	number[0]=* min;
	* min=temp;
	if(max==number)
		max=min;							//如果max和number相等，表示第1个数是最大数，则使max指向当前的最大数 
	temp=number[9];
	number[9]=* max;
	* max=temp;								//将最大数与最后一个数交换 
}*/

void max_min_value(int * number)								//交换函数 
{
	int * max,* min,* p,temp;
	max=min=number;												//开始时使max和min都指向第1个数 
	for(p=number+1;p<number+10;p++)
		if(* p<* min)
			min=p;							//若p指向的数小于min指向的数，就使min指向p指向的小数 
	temp=number[0];
	number[0]=* min;
	* min=temp;								//将最小数与第一个数number[0]交换 				
	for(p=number+1;p<number+10;p++)
	if( * p>* max)
		 max=p;								//若p指向的数大于max指向的数，就使max指向p指向的大数 					
	temp=number[9];
	number[9]=* max;
	* max=temp;								//将最大数与最后一个数交换 
}

void output(int * number)					//输出函数 
{
	int * p;
	printf("Now,they are:    ");
	for(p=number;p<number+10;p++)
		printf(" %d",* p);
	printf("\n");
}
