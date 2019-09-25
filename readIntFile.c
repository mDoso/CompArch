#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE* f = fopen("test.txt", "r");
    if (f == NULL) {
        printf("Could not open test.txt\n");
        return 1;
    }
    int x;
    while (fscanf(f, "%d", &x) == 1) {
        printf("Got value %d\n", x);
    }
    fclose(f);
}
