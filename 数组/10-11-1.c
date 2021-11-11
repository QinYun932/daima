#include<stdio.h>
#include<string.h>
int main()
{
	void sort (char (*p)[6]);
	int i;
	char str[10][6];		//p是指向由6个元素组成的一维数组的指针	
	char (*p)[6];
	printf("input 10  strings:\n");
	for(i=0;i<10;i++)
		scanf("%s",str[i]);
	p=str;
	sort(p);
	printf("Nomw,the sequence is:\n");
	for(i=0;i<10;i++)
		printf("%s\n",str[i]);
	return 0;
		
 }
 
  void sort(char (*s)[6])
 {
 	int i,j;
 	char temp[10], *t=temp;
 	for(i=0;i<9;i++)
 		for(j=0;j<9-i;j++)
 		if(strcmp(s[j],s[j+1])>0)
 		{
 			//以下3行是将s[j]指向的一维数组的内容与s[j+1]指向一维数组的内容互换
			 strcpy(t,s[j]);
			 strcpy(s[j],s[j+1]);
			 strcpy(s[j+1],t); 
		 }
 }
