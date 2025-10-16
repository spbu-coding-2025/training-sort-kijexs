#include <stdio.h>

int main(void){
    int numbers[100];
    int count =0;
    int rm=1;
    while (count < 100 && rm==1){
        rm = scanf("%d",&numbers[count]);
        count+=1;
    }
    count-=1;
    for (int i=0; i<count -1; i+=1){
        for (int j=0; j<count -1 - i;j+=1){
            if (numbers[j]>numbers[j+1]){
                int num = numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1] = num;
            }
        }
    }
    for (int i=0; i<count;i+=1){
        printf("%d ",numbers[i]);
    }
    return 0;
}
