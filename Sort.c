//--Bubble Sort for Numbers--
#include<stdio.h>

int main(){
    int n,a[100];
    int temp;

    printf("Enter the no of Elements:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
    printf("Enter %d Element:",i+1);
    scanf("%d",&a[i]);
    }

    printf("---Before Sorting---\n");
    for(int i=0;i<n;i++){
        printf("Element %d :%d\n",i+1,a[i]);
    }

    //---Bubble Sort---
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("---After Sorting---\n");
    for(int i=0;i<n;i++){
        printf("Element %d : %d\n",i+1,a[i]);
    }
    return 0;
}

//---Bubbles Sort for String---
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char a[50][100],temp[50];

    printf("Enter the no of String:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
    printf("Enter %d String:",i+1);
    scanf("%s",a[i]);
    }

    printf("---Before Sorting---\n");
    for(int i=0;i<n;i++){
        printf("String %d :%s\n",i+1,a[i]);
    }

    //---Bubble Sort---
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(a[j],a[j+1]) > 0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }

    printf("---After Sorting---\n");
    for(int i=0;i<n;i++){
        printf("String %d : %s\n",i+1,a[i]);
    }
    return 0;
}
