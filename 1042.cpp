#include<cstdio>
int main(){
	int n;
	int a[60],rule[60],b[60];
	scanf("%d",&n);
	for(int i=1;i<55;i++){
		scanf("%d",&rule[i]);
		a[i]=i;
	}
	for(int j=1;j<n+1;j++){
		if(j%2==1){
			for(int i=1;i<55;i++){
				b[rule[i]]=a[i];
			}
		}else{
			for(int i=1;i<55;i++){
				a[rule[i]]=b[i];
			}
		}
	}
	char c[10]={"SHCDJ"};
	if(n%2==0){
		for(int i=1;i<55;i++){
			if(i!=1){
				printf(" ");
			}
			a[i]-=1;
			printf("%c%d",c[a[i]/13],a[i]%13+1);
		}
	}else{
		for(int i=1;i<55;i++){
			if(i!=1){
				printf(" ");
			}
			b[i]-=1;
			printf("%c%d",c[b[i]/13],b[i]%13+1);
		}
	}
	return 0;
}
