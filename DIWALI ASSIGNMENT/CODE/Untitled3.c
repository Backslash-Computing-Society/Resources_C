#include <stdio.h>
int main(){

int a[2][3];
int ans[2][2];
int jck=0,jk=0,ek=0,f=0,i=0,k=0,j=0,sum=0;
int bh,cbh;
//printf("enter a\n");
for(k=0;k<2;k++){
	for(jk=0;jk<3;jk++){
		scanf("%d",&bh);
		a[k][jk]=bh;
	}
//	printf("%d ",k);
}
int b[3][2];
//printf("enter b\n");
for(ek=0;ek<2;ek++){
	for(jck =0;jck<3;jck++){
		cbh=0;
		scanf("%d",&cbh);
		b[ek][jck]=cbh;
	}
}

//for(ek=0;ek<2;ek++){
//	for(jck =0;jck<2;jck++){
//	printf("%d %d %d\n",b[ek][jck],ek,jck);
//	}
//}





for(i=0;i<2;i++){
	for(f=0;f<2;f++){
	for(j=0;j<3;j++){
//		printf("%d %d\n",a[i][j],b[j][f]);
		sum+=(int)a[i][j]*(int)b[j][f];
	}
	printf("%d\n",sum);
	ans[i][f]=sum;
	sum=0;
}
}

for(ek=0;ek<2;ek++){
	for(jck =0;jck<2;jck++){
	printf("%d %d %d\n",ans[ek][jck],ek,jck);
	}
}
}
