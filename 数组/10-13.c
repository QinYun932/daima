#include<stdio.h>
#include<math.h>
int main()
{
	float integral(float( * )(float),float,float,int);			//对integarl函数的声明 
	float fsin(float);											//对fsin函数的声明 
	float fcos(float); 											//对fcos函数的声明
	float fexp(float); 											//对fexp函数的声明
	float a1,b1,a2,b2,a3,b3,c,(* p)(float);
	int n=20;
	printf("input a1,b1:");
	scanf("%f,%f",&a1,&b1); 									//输入求sin(x)定积分的下限和上限 
	printf("input a2,b2:");
	scanf("%f,%f",&a2,&b2); 									//输入求cos(x)定积分的下限和上限 
	printf("input a3,b3:");
	scanf("%f,%f",&a3,&b3); 									//输入求e的x次方的定积分的上限和下限
	p = fsin;													//使p指向fsin函数 
	c=integral(p,a1,b1,n); 										//求出sin（x）的定积分
	printf("The integral of sin(x) is :%f\n",c);
	p = fcos;													//使p指向fcos函数 
	c=integral(p,a2,b2,n); 										//求出cos（x）的定积分
	printf("The integral of cos(x) is :%f\n",c);
	p = fexp;													//使p指向fexp函数 
	c=integral(p,a3,b3,n); 										//求出e的x次方的定积分
	printf("The integral of exp(x) is :%f\n",c);
	return 0;
	
}
		//下面是用矩形法求定积分的通用函数
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


float fsin(float x)									//计算sin(x)的函数 
{
	return sin(x);
}

float fcos(float x)									//计算cos(x)的函数 
{
	return cos(x);
}

float fexp(float x)									//计算e的x次方的函数 
{
	return exp(x);
}
