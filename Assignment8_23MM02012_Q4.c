#include<stdio.h>
void search(int *a,int index)
{  
    int i,count=0,j;
      for(i=1;i<index;i++){
        for(j=0;j<index;j++){
            if(*(a+j)==i){
              count=count+1;
            }
        }
        if(count==2){
          printf(" %d",i);
          return;
        }
        else if(count==1);
        else{
            printf("\n Wrong input");
            break;
        }
        count=0;
    }
}
void main(){
  int b[50],x,n;
  int *p=NULL;
  p = b;
  printf("\n Enter number of elements:");
  scanf(" %d",&n);
  for(x=0;x<n;x++){
    printf("\n Enter element:");
    scanf(" %d",(p+x));
  }
  search(b,n);
}