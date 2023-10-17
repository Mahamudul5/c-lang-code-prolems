#include <stdio.h>
#include <string.h>
int main()
{
   char a[100];
//    scanf("%s",&a);
fgets(a,20,stdin);
//    int count=0;
//    for(int i=0;a[i] !='\0';i++){
//     count++;
//    } 
//    printf("%d",count-1);
int sz=strlen(a);
printf("%d",sz);
    return 0;
} 