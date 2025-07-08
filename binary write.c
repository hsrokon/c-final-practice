#include <stdio.h>

int main() {
    FILE *fp;
    int data[] = {1, 2, 3, 4, 5};

    // Write binary
    fp = fopen("data.bin", "wb");
    fwrite(data, sizeof(int), 5, fp);
    fclose(fp);

    //printf("int size %d\n", sizeof(int));
    // Read binary
    int readData[5];
    fp = fopen("data.bin", "rb");
    fread(readData, sizeof(int), 5, fp);
    fclose(fp);

    for (int i = 0; i < 5; i++) {
        printf("%d ", readData[i]);
    }

    return 0;
}
