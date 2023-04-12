#include<stdio.h>

int main(){
    int a[101][101], b[101], n, i, j, s1=0, s2=0, s3=0, s4=0, c=0, aux=0;
    scanf("%d", &n);
    for(i=0; i<=n-1; i++){
            for(j=0; j<=n-1; j++){
                    scanf("%d",&a[i][j]);
            }
    }
    for(i=0; i<=n-1; i++){
            for(j=0; j<=n-1; j++){
                    if(i<j && i+j<n-1){
                            s1=s1+a[i][j];
                            b[0]=s1;
                            }
                    else{if(i+j<n-1 && i>j){
                            s2=s2+a[i][j];
                            b[1]=s2;
                           }
                            else{if(i>j && i+j>n-1){
                                    s3=s3+a[i][j];
                                    b[2]=s3;}
                                    else{if(i<j && i+j>n-1){
                                            s4=s4+a[i][j];
                                            b[3]=s4;

                                    }
                                    }
                            }
                    }
            }
    }

    for(i=0; i<=2; i++)
        for(j=i+1; j<=3; j++)
                if(b[i]>b[j]){
                aux=b[i];
                b[i]=b[j];
                b[j]=aux;
        }

    for(i=0; i<=3; i++)
        {printf("%d ",b[i]);}
        return 0;
}

