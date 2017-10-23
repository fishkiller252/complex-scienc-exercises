#include<stdio.h>
#include<stdlib.h>
int main(void){

FILE *fp;

double i;//個体数
double j;//初期値
double r;//繁殖率
//logistic.datに書き込み
if((fp=fopen("logistic.dat","w"))==NULL){
printf("file open error!!\n");
exit(EXIT_FAILURE);
}

//個体変動
scanf("%f",&r);; //今回の繁殖率
for(i=0,j=0.7;i<=100;i++){
fprintf(fp,"%f\n", j);
j=r*(1-j)*j;
}
fclose(fp);
return 0;

}
