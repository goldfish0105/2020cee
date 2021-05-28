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