#include<stdio.h>
int main()
{
	int m;
	char str1[20],str2[20],* p1,* p2;
	printf("input two string:\n");
	scanf("%s",str1);
	scanf("%s",str2);
	p1=&str1[0];
	p2=&str2[0];
	m = strcmp(p1,p2);
	printf("result:%d,\n",m);
	return 0;
} 
			
strcmp(char * p1,char * p2)				//�����ַ����ȽϺ��� 
{
	int i;
	i=0;
	while(* (p1+i)== * (p2+i))
		if(* (p1+i++)=='\0') return(0);	//���ʱ���ؽ��0	
	return(* (p1+i)- * (p2+i));			/*����ʱ���ؽ��Ϊ��һ�������ַ�ASCLL��Ĳ�ֵ*/ 
}
