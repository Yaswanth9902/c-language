#include<stdio.h>
main() {
 int num,m,n,i;
 printf("Enter starting range :");
 scanf("%d",&n);
 printf("Enter ending range :");
 scanf("%d",&m);
if(m>0 && n>0 && m>n){
	printf("odd:\n");
 for(i=n;i<m;i++){
 	if(i%2!=0){
 		printf("%d\n",i);
	 }
 }
 printf("even:\n");
 for(i=n;i<m;i++){
 	if(i%2==0){
 		printf("%d\n",i);
	 }
 }
}
else
	printf("invalid");

}
