# 2020cce
## 第一題 找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%5);
}
```
## 第二題 因數個數
```C
#include <stdio.h>
int main()
{
	int n,j=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)
		j++;
	}
	printf("%d\n",j);
}
```
## 第三題 找倍數
```C
#include <stdio.h>
int main()
{
	int a[10],n=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]%3==0) n++;
	}
	printf("%d\n",n);
}
```
## 第四題 整數轉換為等級
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)printf("A\n");
	else if(n< 90&&n>=80)printf("B\n");
	else if(n< 80&&n>=60)printf("C\n");
	else printf("F\n");
}
```
## 第五題 分數化簡
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=10000;i>0;i--){
		if(a%i==0&&b%i==0){
		a=a/i;
		b=b/i;
		}
	}
	printf("%d %d\n",a,b);
}
```
## 01.讀入整數反序列印
```C
#include <stdio.h>
int a[100];
int main()
{
	int n;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			n=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
## 02.
```C
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++){
	ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
## 03.
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		ans=ans+(i-1)*i;
	}
	printf("%d\n",ans);
}
```
## 04.
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==b)printf("Enter two numbers:  It is a square ");
	else printf("Enter two numbers:  It is not a square ");
}
```
## 05.
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)printf("0\n");
	else if(a==1)printf("1\n");
	else if(a==10)printf("2\n");
	else if(a==11)printf("3\n");
	else if(a==100)printf("4\n");
	else if(a==101)printf("5\n");
	else if(a==110)printf("6\n");
	else if(a==111)printf("7\n");
	else if(a==1000)printf("8\n");
	else if(a==1001)printf("9\n");
	else if(a==1010)printf("10\n");
	else if(a==1011)printf("11\n");
	else if(a==1100)printf("12\n");
	else if(a==1101)printf("13\n");
	else if(a==1110)printf("14\n");
	else if(a==1111)printf("15\n");
}
```
## 06.
```C
#include <stdio.h>
int a[50];
int main()
{
	int n,m=0,b=0,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b=b+a[i];
	}
	float avg;
	avg=(float)b/n;
	printf("均標:%.1f\n",avg);
	for(int i=0;i<n;i++){
		if(a[i]>=avg){
			c=c+a[i];
			m++;
		}	
	}
	float sum;
	sum=(float)c/m;
	printf("前標:%.1f\n",sum);
}
```
## week03-1
```c
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;
    p=p+2;
    *p=666;
}
```
## week03-2
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll(){
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printfAll();
    int *p=&a[2];
    *p=222;
            printfAll();
    p=p+2;
    *p=666;
            printfAll();
    p--;
    *p=555;
            printfAll();
}
```
## week03-3
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll(){
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printfAll();
    int *p=&a[2];
    *p=222;
            printfAll();
            printf("p心裡小紙條的值是:%d\n",p);
    p=p+2;
    *p=666;
            printfAll();
            printf("p心裡小紙條的值是:%d\n",p);
    p--;
    *p=555;
            printfAll();
            printf("p心裡小紙條的值是:%d\n",p);
}
```
## week03-4
```c
#include <stdio.h>
#include <stdlio.h>
int a[10];
int main(){
    int b[10];
    int *p=(int*)malloc(sizeof(int)*10);
    return 0;
}
```
## week04-1
```c
#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    struct POINT a;
}
```
## week04-2
```c
#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
    return 0;
}
```
## week04-3
```c
#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
    return 0;
}
```
## week04-4
```c
#include <stdio.h>
struct DATA{
    int x,y;
}a[3];
struct DATA b={100,200};
int main(){
    for(int i=0;i<3;i++){
        printf("a[%d]:%d %d\n",i,a[i].x,a[i].y);
    }
    printf("b: %d %d\n",b.x,b.y);
    struct DATA c;
    printf("c: %d %d ¹³¶Ã½X\n",c.x,b.y);
    c=b;
    printf("c: %d %d\n",c.x,c.y);
}
```
## week04-5
```c
#include <stdio.h>
struct POINT{
    float x,y,z;
};
struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};
int main()
{
    struct POINT *p=&point[0];
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
}
```
## week05-1
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);
}
```
## week05-2
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);
    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("現在印出來的line4: ==%s==\n",line4);
}
```
## week05-3
```c
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};
    for(int i=0;i<5;i++){
        printf("%s\n",line[i]);
    }
}
```
## week05-4
```c
#include <stdio.h>
int main()
{
    printf("請看看值是多少: %d",'\0');
}
```
## week05-5
```c
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
        printf("左邊大\n");
    }
    else{
        printf("右邊大\n");
    }
}
```
## week10-1
```c
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			printf("%s\n",line);
		}
		printf("====分隔線====\n");
	}
}
```
## week10-2
```c
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			//printf("%s\n",line);
			N++;
		}
		printf("有幾棵樹? %d\n",N);
		printf("====分隔線====\n");
	}
}
```
## week10-3
```c
#include <stdio.h>
#include <string.h>
char line[1000];
char tree[1000000][32];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			strcpy(tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		printf("有幾棵樹? %d\n",N);
		for(int i=0;i<N;i++){
			printf("%s\n",tree[i]);
		}
		printf("====分隔線====\n");
	}
}
```
## week10-4
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void*p1,const void*p2){
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			strcpy(tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		printf("有幾棵樹? %d\n",N);
		qsort(tree,N,32,compare);
		for(int i=0;i<N;i++){
			printf("%s\n",tree[i]);
		}
		printf("====分隔線====\n");
	}
}
```
## week10-5
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void*p1,const void*p2){
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			strcpy(tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		//printf("有幾棵樹? %d\n",N);
		qsort(tree,N,32,compare);
		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0;i<N;i++){
			if(strcmp(tree[i],tree[i+1])==0){
				ans++;
			}else{
				printf("%d\n",ans);
				ans=1;
				printf("%s ",tree[i+1]);
			}
			//printf("%s\n",tree[i]);
		}
		//printf("====分隔線====\n");
	}
}
```
## week10-6
```c
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void*p1,const void*p2){
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			strcpy(tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		//printf("有幾棵樹? %d\n",N);
		qsort(tree,N,32,compare);
		if(t>0)printf("\n");
		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0;i<N-1;i++){
			if(strcmp(tree[i],tree[i+1])==0){
				ans++;
			}else{
				printf("%.4f\n",100*ans/(float)N);
				ans=1;
				printf("%s ",tree[i+1]);
			}
			//printf("%s\n",tree[i]);
		}
		printf("%.4f\n",100*ans/(float)N);
	}
}
```
## week11-1
```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};
int compare(const void*p1,const void*p2)
{
    int d1=*(int*)p1;
    int d2=*(int*)p2;
    if(d1>d2)return 1;
    if(d1==d2)return 0;
    if(d1<d2)return -1;
}
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
```
## week11-2
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];
char others[80];
int compare(const void *p1,const void *p2)
{
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	int result=strcmp(s1,s2);
	if(result>0)return 1;
	if(result==0)return 0;
	if(result<0)return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
		gets(others);
	}
	qsort(line,n,80,compare);
	printf("%s ",line[0]);
	int ans=1;
	for(int i=0;i<n-1;i++){
		if(strcmp(line[i],line[i+1])==0){
			ans++;
		}else{
			printf("%d\n",ans);
			printf("%s ",line[i+1]);
			ans=1;
		}
	}
	printf("%d\n",ans);
}
```
## week11-3
```c
#include <stdio.h>
struct data{
    int ans;
    char c;
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%c %d\n",box.c,box.ans);
}
```
## week11-4
```c
#include <stdio.h>
typedef struct data{
    int ans;
    char c;
}DATA;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%C %d\n",box.c,box.ans);
}
```
## week11-5
```c
#include <stdio.h>
char line[2000];
int main()
{
    for(int t=0;gets(line);t++){
        if(t>0)printf("\n");
        printf("blahblahblah\n");
        printf("blahblahblah\n");
        printf("blahblahblah\n");
    }
}
```
## week11-6
```c
#include <stdio.h>
char line[2000];
int ans[256];
int main()
{
    for(int t=0;gets(line);t++){
    	for(int i=0;i<256;i++)ans[i]=0;
    	for(int i=0;line[i]!=0;i++){
    		char c=line[i];
    		ans[c]++;
    	}
       	if(t>0)printf("\n");
       	for(int i=0;i<256;i++){
       		if(ans[i]>0)printf("%d %d\n",i,ans[i]);
        }
    }
}
```
## week12-1
```c
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		int ans=0;
		printf("Optimal train swapping takes %d swaps.\n");
	}
}
```
## week12-2
```c
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		int ans=0;
		for(int k=0;k<N-1;k++){
			for(int i=0;i<N-1;i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
## week12-3
```c
int a[10000];
int main()
{
	int N,M;
	while(scanf("%d%d",&N,&M)==2){
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		printf("%d%d\n",N,M);
		for(int i=0;i<N;i++){
			printf("%d\n",a[i]);
		}
	}
}
```
## week12-4
```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={};
		for(int i=0;line[i]!=0;i++){
			char c=line[i];
			ans[c]++;
		}
		if(t>0)printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0)printf("%d%d\n",i,ans[i]);
		}
	}
}
```
## week12-5
```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={};
		char c[256]={};
		for(int i=0;i<256;i++)c[i]=i;
		for(int i=0;line[i]!=0;i++){
			char c=line[i];
			ans[c]++;
		}
		for(int i=0;i<256;i++){
			for(int j=i+1;j<256;j++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0)printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0)printf("%d%d\n",i,ans[i]);
		}
	}
}
```
## week12-6
```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={};
		char c[256]={};
		for(int i=0;i<256;i++)c[i]=i;
		for(int i=0;line[i]!=0;i++){
			char c=line[i];
			ans[c]++;
		}
		for(int i=0;i<256;i++){
			for(int j=i+1;j<256;j++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
				if(ans[i]==ans[j]&&c[i]<c[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0)printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0)printf("%d %d\n",c[i],ans[i]);
		}
	}
}
```
