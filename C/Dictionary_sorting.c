#include<stdio.h>
#include<string.h>

void main() {
    char a[100][50],temp[50];
    int n;
    printf("Enter number of elements to be added in dictionary:");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        printf("Enter String:");
        scanf("%s",a[i]);
    }
    printf("Input Strings\n");
    for(int i=0;i<n;i++) {
        printf("%s ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++) { //bubble sort
        for(int j=0;j<n-i-1;j++){
            int k=0; //represents kth letter of each string that we are comparing
            int replace=0;
            while((a[j][k]!='\0')&&(a[j+1][k]!='\0')) { //needed because we need to compare each letter of string until there is different letter e.g aab aaa
                if(a[j][k]>a[j+1][k]) {
                    replace=1;
                    break;
                } else if(a[j][k]<a[j+1][k]) {
                    break;
                } else if(a[j+1][k+1]=='\0') {
                    replace=1; //if a[j] and a[j+1] are similar and a[j+1] is shorter than a[j] then replace e.g. abcde abc, in order it would be abc abcde
                    break;
                }
                k++;
            }
            if(replace==1) {
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    printf("Sorted Strings\n");
    for(int i=0;i<n;i++) {
        printf("%s ",a[i]);
    }
}
