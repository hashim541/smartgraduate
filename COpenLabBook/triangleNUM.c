#include<stdio.h>
int main()
{
	int i,s,r,k=0,c=0,c1=0;
	printf("enter the rows : ");
	scanf("%d",&r);
	for(i=1;i<=r;++i,k=0){
		for(s=1;s<=r-i;++s){
			printf("  ");
			++c;
		}
		while(k!=2*i-1){
			if(c<=r-1){
				printf("%d ",i+k);
				++c;
			}else{
				++c1;
				printf("%d ",(i+k-2*c1));	
			}
				++k;
		}
		c1=c=k=0;
		printf("\n");
	
	}
	return 0;
}
