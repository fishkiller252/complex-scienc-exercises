#include <stdio.h>
#include <stdlib.h>
int main(void) {

FILE *fp;

float x=rand()/(RAND_MAX+1.0);//X0(初期値)
float r; //増加率
float n;//Xn
int i;//回数

//report3_1.datファイルを開く
if((fp=fopen("report3_1.dat","w"))==NULL){
printf("file open error!!\n");
exit(EXIT_FAILURE);
}

scanf("%f",&r);
n = x;
for(i=0;i<=100;i++){
  if(i>=50){
  fprintf(fp,"%f ",n);
  n=r*(1-n)*n;
  fprintf(fp,"%f\n",n);
  fprintf(fp,"%f %f\n",n ,n);
}
x=n;
}
fclose(fp);
return (0);

}
