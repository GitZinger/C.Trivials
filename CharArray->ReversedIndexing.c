#include <stdio.h>
#include<string.h>
int main() {
    char data[] = "012345678901234568.9";
  	char* ptr = &data[9];
  	char c = ptr[-2]; // 7
    data[9]='u';
    //printf("%c",data[9]);
    //printf("%s",data);
    printf("%d\n",strlen(data));
    printf("%c",data[strlen(data)-3]);
        
    //printf("Hello, World!");
    return 0;
}
