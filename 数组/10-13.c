#include<stdio.h>
#include<math.h>
int main()
{
	float integral(float( * )(float),float,float,int);			//��integarl���������� 
	float fsin(float);											//��fsin���������� 
	float fcos(float); 											//��fcos����������
	float fexp(float); 											//��fexp����������
	float a1,b1,a2,b2,a3,b3,c,(* p)(float);
	int n=20;
	printf("input a1,b1:");
	scanf("%f,%f",&a1,&b1); 									//������sin(x)�����ֵ����޺����� 
	printf("input a2,b2:");
	scanf("%f,%f",&a2,&b2); 									//������cos(x)�����ֵ����޺����� 
	printf("input a3,b3:");
	scanf("%f,%f",&a3,&b3); 									//������e��x�η��Ķ����ֵ����޺�����
	p = fsin;													//ʹpָ��fsin���� 
	c=integral(p,a1,b1,n); 										//���sin��x���Ķ�����
	printf("The integral of sin(x) is :%f\n",c);
	p = fcos;													//ʹpָ��fcos���� 
	c=integral(p,a2,b2,n); 										//���cos��x���Ķ�����
	printf("The integral of cos(x) is :%f\n",c);
	p = fexp;													//ʹpָ��fexp���� 
	c=integral(p,a3,b3,n); 										//���e��x�η��Ķ�����
	printf("The integral of exp(x) is :%f\n",c);
	return 0;
	
}
		//�������þ��η��󶨻��ֵ�ͨ�ú���
float integral(float( * p)(float),float a ,float b ,int n)
{
	int i;
	float x,h,s;
	h=(b-a)/n;
	x=a;
	s=0;
	for(i=1;i<=n;i++)
	{
		x=x+h;
		s+=(*p)(x)*h; 
	 } 
	 return(s);
} 


float fsin(float x)									//����sin(x)�ĺ��� 
{
	return sin(x);
}

float fcos(float x)									//����cos(x)�ĺ��� 
{
	return cos(x);
}

float fexp(float x)									//����e��x�η��ĺ��� 
{
	return exp(x);
}
