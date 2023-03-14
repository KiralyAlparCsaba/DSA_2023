#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"
#include <stdbool.h>

int main() {

char postfix[80]= "2 5 3 6 + * * 15 / 2 - 7";
Stack verem;
createStack(strlen(postfix),&verem);
char *token;
token = strtok(postfix," ");
while(token != NULL) {
    if ((strlen(token) - 1) == 0) {
        if (isdigit(token[0])) {
            int x = atoi(token);
            push(&verem, x);

        } else {
            int n1 = pop(&verem), n2 = pop(&verem);
            if (strcmp(token, "+") == 0) {
                push(&verem, n1 + n2);
            }
            if (strcmp(token, "-") == 0) {
                push(&verem, n2 - n1);
            }
            if (strcmp(token, "*") == 0) {
                push(&verem, n1 * n2);
            }
            if (strcmp(token, "/") == 0) {
                push(&verem, n2 / n1);
            }
            if (strcmp(token, "+") == 0) {
                push(&verem, n2 % n1);
            }
        }

    } else {
        int x = atoi(token);
        push(&verem, x);
    }
    int y = pop(&verem);
    printf("%i", y);






    token = strtok(NULL," ");
}


}
