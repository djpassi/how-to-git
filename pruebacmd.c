#include <stdio.h>
#include <unistd.h>

int main() {
    char *name[4];

    name[0] = "sh";
    name[1] = "-c";
    name[2] = "echoo pico 'hola'";
    name[3] = NULL;
    execvp("/bin/sh", name);

    return 0;
}

//cambios agregados
//DIFFERENT LINE!