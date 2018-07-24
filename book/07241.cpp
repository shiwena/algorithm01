////文件名:exp6-1.cpp
#include <stdio.h>
void fun(int a[10][10],int n){	
	int i,j,k=0,m;
	if(n%2==0)m=n/2;
	else m=n/2+1;
	for(i=0;i<m;i++){
		for(j=i;j<n-i;j++){
			k++;
			a[i][j]=k;			
		}
		for(j=i+1;j<n-i;j++){
			k++;
			a[j][n-i-1]=k;					
		}
		for(j=n-i-2;j>=i;j--){
			k++;
			a[n-i-1][j]=k;						
		}
		for(j=n-i-2;j>i;j--){
			k++;
			a[j][i]=k;			
		}		
	}	
}

int main(){	
	int i=0,j=0,n=0;
	scanf("%d",&n);
	int a[10][10];	
	fun(a,n);	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){			
			printf("%4d",a[i][j]);
			printf(" ");
		}
		printf("\n");		
	}	
} 

//#define MaxLen 10
//void fun(int a[MaxLen][MaxLen],int n)
//{
//	int i,j,k=0,m;
//	if (n%2==0)    //m=én/2ù
//		m=n/2;
//	else
//		m=n/2+1;
//	for (i=0;i<m;i++)
//	{
//		for (j=i;j<n-i;j++)
//		{
//			k++;
//			a[i][j]=k;
//		}
//		for (j=i+1;j<n-i;j++)
//		{
//			k++;
//			a[j][n-i-1]=k;
//		}
//		for (j=n-i-2;j>=i;j--)
//		{
//			k++;
//			a[n-i-1][j]=k;
//		}
//		for (j=n-i-2;j>=i+1;j--)
//		{
//			k++;
//			a[j][i]=k;
//		}
//	}
//}
//int main()
//{
//	int n,i,j;
//	int a[MaxLen][MaxLen];
//	printf("输入n(n<10):");
//	scanf("%d",&n);
//    fun(a,n);
//	printf("%d阶数字方阵如下:\n",n);
//	for (i=0;i<n;i++)
//	{
//		for (j=0;j<n;j++)
//			printf("%4d",a[i][j]);
//		printf("\n");
//	}
//}

