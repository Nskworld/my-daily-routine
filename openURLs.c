#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char buf[100];
    char *target[100];
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%s", *target);

    /* Set values as below:
     *
     * 1.　Change <WORD> to input for opening URL.
     * 2.　Change <URL> for pages which you want to show.
     * */
    if(strcmp(*target, "<WORD>") == 0){
        system("open <URL>");
        return 0;
    }
}
