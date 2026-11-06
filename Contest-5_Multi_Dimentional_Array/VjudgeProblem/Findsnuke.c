#include<stdio.h>

int main(){

    int h, w;
    scanf("%d%d",&h,&w);

    char arr[h][w];
    char temp;

    scanf("%c",&temp);

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            scanf("%c",&arr[i][j]);
        }
        scanf("%c",&temp);
    }

    int dx[9]={-1,0,0,-1,1,-1,1,-1,1};
    int dy[9]={-1,1,-1,0,0,-1,1,1,-1};

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            for(int k=1; k<=8; k++){
                int i2=i, j2=j;

                //snuke
                char word[]="snuke";
                int flag=1;
                for(int l=0; l<5; l++){
                    if(0<=i2 && i2<h && 0<=j2 && j2<w){
                        if(arr[i2][j2]!=word[l]){
                            flag=0;
                            break;
                        }
                        i2+=dx[k];
                        j2+=dy[k];
                    }
                    else{
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                    i2=i, j2=j;
                    for(int l=0; l<5; l++){
                        printf("%d %d\n",i2+1,j2+1);
                        i2+=dx[k];
                        j2+=dy[k];
                    }
                    return 0;
                }
            }
        }
    }

    return 0;
}
