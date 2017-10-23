#include <stdio.h>
#include <stdlib.h>
int main(void) {

FILE *fp;

float x=rand()/(RAND_MAX+1.0);//X0(初期値)
float r=0; //増加率
float n; //Xn+1

//report3_2.datファイルを開く
if((fp=fopen("report3_2.dat","w"))==NULL){
printf("file open error!!\n");
exit(EXIT_FAILURE);
}
n=x;
for(r=1;4>=r;r+=0.00001f){
n=r*(1-n)*n;
fprintf(fp,"%f",r);
fprintf(fp," %f\n",x);
x=n;
}

fclose(fp);
return (0);

}
