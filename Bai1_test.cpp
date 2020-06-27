#include<stdio.h>
#include<conio.h>
#include<string.h>
int demkt(char *s);
int main()
{

	char s[30];
	printf("\nNhap chuoi:");
	gets(s);
	int kq=demkt(s);
	printf("\nSo ky tu co trong chuoi la: %d",kq);
	getch();
	return 0;
}
int demkt(char *s)
{
	int i,n=strlen(s);
	int dem=1;
//	if(s[0]!=' ')
//		dem=1;
	for(int i=0;i<n-1;i++)
	{
		dem++;
	}
	return dem;
}
