#include<stdio.h>
#include<string.h>
int main()
{
	void sort (char s[ ][6]);
	int i;
	char str[10][6];		//p是指向由6个元素组成的一维数组的指针 
	printf("input 10  strings:\n");
	for(i=0;i<10;i++)
		scanf("%s",str[i]);
	sort(str);
	printf("Nomw,the sequence is:\n");
	for(i=0;i<10;i++)
		printf("%s\n",str[i]);
	return 0;
		
 } 
 
 void sort(char s[10][6])
 {
 	int i,j;
 	char *p,temp[10];
 	p =  temp;
 	for(i=0;i<9;i++)
 		for(j=0;j<9;j++)
 		if(strcmp(s[j],s[j+1])>0)
 		{
 			//以下3行是将s[j]指向的一维数组的内容与s[j+1]指向一维数组的内容互换
			 strcpy(p,s[j]);
			 strcpy(s[j],s[j+1]);
			 strcpy(s[j+1],p); 
		 }
 }
