//Ѱ��һ�����ξ���İ��㣨saddle point��  
#include <stdio.h>  
  
int main(){  
    //����һ�����֣�����������ξ����Ǽ��׵�  
    int n;  
    scanf("%d",&n);  
  
    //����n�׾����Լ���Ҫ�õ��ı���  
    int matrix[n][n];  
    int i,j,temp,count,flag=0;  
  
    //��������е�ÿһ����  
    for(i=0; i<n; i++){  
        for(j=0; j<n; j++){  
            scanf("%d",&temp);  
            matrix[i][j]=temp;  
        }  
    }  
  
    //���Զ���������Ƿ���ȷ  
/*  {  
        for(i=0; i<n; i++){  
            printf("%d\t",i);  
            for(j=0; j<n; j++){  
                printf("%d\t",matrix[i][j]);  
            }  
            printf("\n");  
        }  
    }  
*/  
    //��ʼѰ�Ұ���  
    for(i=0; i<n; i++){    
        //�ҳ�ÿ���е���������  
        temp=matrix[i][0];  //��temp��count��ʶ��ÿ�������������Լ�λ��  
        count=0;  
        for(j=1; j<n; j++){  
            if(temp<matrix[i][j]){     
                temp=matrix[i][j];  
                count=j;  
            }  
        }  
        //����һ�£������������֣��Ƿ����������е���С����  
        for(j=0;j<n;j++){  
            if(matrix[j][count]<temp){  
                flag++; //���������Сtemp��flag�Ͳ�Ϊ��  
            }  
        }  
        if(flag==0){    //����flagֵ�����Ϊ�㣬֤����������Ҫ�ҵİ���  
            printf("%d %d\n",i,count);  
            break;  
        }  
        flag=0;  
    }  
    //���û�ҵ�������ѭ����ֹ�������NO��  
    if(i==n){  
        printf("NO");  
    }  
    return 0;  
}  
