#include<stdio.h>

int main()

{
int arr[5];
printf("Ënter 5 values:\n");
for (int i = 0; i<5; i++){
scanf("%d", &arr[i]);

}
printf("you entered:\n");
for(int i=0; i < 5; i++){
printf("%d", arr[i]);

}
return 0;




}
