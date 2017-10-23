#include<stdio.h>
#include<stdlib.h>
int main(){

  FILE *fp;

float r; //増加率
float x; //数
float y; //x0
float i; //変化数
int j; //回数(時間)

//report2_2.datファイルを開く
if((fp=fopen("report2_2.dat","w"))==NULL){
printf("file open error!!\n");
exit(EXIT_FAILURE);
}

scanf("%f",&r);
for(i=0;i<=1.0;i=i+0.001){
y=i;
for(j=0;j<=200;j++){
x=r*(1-y)*y;
if(150<j&&j<200){
fprintf(fp,"%.3f %.3f\n",i,x);
}
y=x;
}
}
fclose(fp);
return 0;
}
