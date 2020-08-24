#include<cstdio>
int main(){
	int sum,n;
	int d[100010],d1[100010];
	d1[1]=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&d[i]);
	}
	for(int i=1;i<=n-1;i++){
		d1[i+1]=d[i]+d1[i];
	}
	sum=d1[n]+d[n];
	int a,b,dab;
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		if(i!=1)printf("\n");
		scanf("%d%d",&a,&b);
		if(a<b)dab=d1[b]-d1[a];
		else dab=d1[a]-d1[b];
		if(dab<=sum/2)printf("%d",dab);
		else printf("%d",sum-dab);
	}
	return 0;
}
