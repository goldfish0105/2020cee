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
		printf("¦³´X´Ê¾ð? %d\n",N);
		printf("====¤À¹j½u====\n");
	}
}
