#include <stdio.h>
#include "BaiTapTH3.h"

int main(int argc, char *argv[])
{
    if (argc >= 2){
        FILE *file = fopen(argv[1], "rt");
        while (!feof(file))
        {
            printf("%c", fgetc(file));
        }
    }

    return 0;
}