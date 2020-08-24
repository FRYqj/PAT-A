#include<cstdio>
int main(){
	int t;
	scanf("%d",&t);
	long long a,b,c,s;
	for(int i=1;i<=t;i++){           	      //Case #1: false
		scanf("%lld%lld%lld",&a,&b,&c);
		s=a+b;
		if(i!=1)printf("\n");
		if(a>0&&b>0&&s<0)printf("Case #%d: true",i);
		else if(a<0&&b<0&&s>=0)printf("Case #%d: false",i);
		else if(s>c)printf("Case #%d: true",i);
		else printf("Case #%d: false",i);
	}
	return 0;
}
