#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int point()
{ 
    int i,j,k,M,N; 
    int max = 0, min = 0; 
    int m[100], n[100]; 
    double average, G,sum = 0.0;
    int score[100];
     
    printf("欢迎来到黄金点游戏！\n"); 
    printf("请输入游戏轮数：\n"); 
    scanf_s("%d", &M); 
    printf("请输入游戏人数：\n"); 
    scanf_s("%d", &N); 
    memset(score,0,sizeof(int)*N);
    for (i = 0; i < M; i++) 
    {  
        printf("\n第%d轮游戏：\n",i+1);  
        for (j = 0; j < N; j++)  
        {  
            printf("请输入一个0-100的数：\n");  
            scanf_s("%d",&m[j]);   
            sum = sum + m[j];   
            average = sum/N;   
            G = average*0.618;       
            n[j] = m[j] - G;   
            n[j]=(n[j]>0) ? n[j] : n[j]*(-1);
            max=(n[j]<n[max]) ? max:j;
            min=(n[j]<n[min]) ? j:min;
             
         }  
        //printf("\n%d\n",max);
        //printf("%d\n",min);
        score[max]-=2;
            score[min]+=2;
        for(k=0;k<N;k++)
        {
            printf("第%d人本轮后总分数为%d:\t",k+1,score[k]);
        }  
        sum = 0;   
        printf("黄金点是%f", G);
        max=0;
        min=0;
}
    return 0;
}
 
int main()
{ 
    point(); 
    system("pause");
