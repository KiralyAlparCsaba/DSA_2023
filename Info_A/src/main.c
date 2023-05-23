#include <stdio.h>

#include "bsc.h"

int main() {

    Node *film = NULL;
    if(!(freopen("input.txt","r",stdin)))
        return -1;
    scanf("%[^\n]\n %i %i %i",film->info.cim,&film->info.hossz,&film->info.kiadasiEv,&film->info.mufaj);
    inorderTraversal(film);

}
