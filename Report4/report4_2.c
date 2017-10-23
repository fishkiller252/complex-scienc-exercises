#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){

  FILE *fp;

double x; //
double r; //
double n; //xn
double s=0;//
double a=0;//
double c;//
double f; //
int i;//
int j;//

//report4_2.datファイルを開く
if((fp=fopen("report4_2.dat","w"))==NULL){
printf("file open error!!\n");
exit(EXIT_FAILURE);
}

scanf("%lf",&r);
for(j=1;j<=3000000;j++){
x=rand()/(RAND_MAX+1.0);
for(i=0;i<=500;i++){
n=r*(1-x)*x;
f=fabs(r-2*x*r);
s=a+log(f);
a=s;
x=n;
}

c=s/i;
if(r>=3.825&&r<=3.86){
fprintf(fp,"%f %f\n",r,c);
}
r=r+0.000001;
a=0;
x=0;
}

fclose(fp);
return 0;

}
