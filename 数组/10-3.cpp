#include<stdio.h>
int main()
{
	void input(int * );
	void max_min_value(int * );
	void output(int *);
	int number[10];										
	input(number);												//��������10�����ĺ��� 
	max_min_value(number);										//���ý������� 
	output(number);												//����������� 
	return 0; 
}

void input(int * number)
{
 int i;															//����10�����ĺ��� 
 printf("input 10 number:");
 for(i=0;i<10;i++)
 	scanf("%d",&number[i]);	
}

/*void max_min_value(int * number)								//�������� 
{
	int * max,* min,* p,temp;
	max=min=number;												//��ʼʱʹmax��min��ָ���1���� 
	for(p=number+1;p<number+10;p++)
		if( * p>* max)
		 max=p;								//��pָ���������maxָ���������ʹmaxָ��pָ��Ĵ��� 
		else
			if(* p<* min)
			min=p;							//��pָ�����С��minָ���������ʹminָ��pָ���С�� 
	temp=number[0];
	number[0]=* min;
	* min=temp;
	if(max==number)
		max=min;							//���max��number��ȣ���ʾ��1���������������ʹmaxָ��ǰ������� 
	temp=number[9];
	number[9]=* max;
	* max=temp;								//������������һ�������� 
}*/

void max_min_value(int * number)								//�������� 
{
	int * max,* min,* p,temp;
	max=min=number;												//��ʼʱʹmax��min��ָ���1���� 
	for(p=number+1;p<number+10;p++)
		if(* p<* min)
			min=p;							//��pָ�����С��minָ���������ʹminָ��pָ���С�� 
	temp=number[0];
	number[0]=* min;
	* min=temp;								//����С�����һ����number[0]���� 				
	for(p=number+1;p<number+10;p++)
	if( * p>* max)
		 max=p;								//��pָ���������maxָ���������ʹmaxָ��pָ��Ĵ��� 					
	temp=number[9];
	number[9]=* max;
	* max=temp;								//������������һ�������� 
}

void output(int * number)					//������� 
{
	int * p;
	printf("Now,they are:    ");
	for(p=number;p<number+10;p++)
		printf(" %d",* p);
	printf("\n");
}
