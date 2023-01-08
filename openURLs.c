#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char buf[100];
    char *target[100];
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%s", *target);

    if(strcmp(*target, "js") == 0){
        system("open https://www.codewars.com/dashboard");
        return 0;
    }
}
