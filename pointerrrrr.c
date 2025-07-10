#include <stdio.h>

// Example function for function pointer
void sayHello() {
    printf("Hello from function pointer!\n");
}

int main() {
    // 1️⃣ Normal pointer
    int x = 10;
    int *p = &x;  // pointer to int
    printf("Normal pointer: x=%d, *p=%d, p=%p\n", x, *p, (void*)p);

    // 2️⃣ Null pointer
    int *nullPtr = NULL;
    printf("Null pointer: nullPtr=%p\n", (void*)nullPtr);

    // 3️⃣ Void pointer
    void *vptr;
    float y = 5.5;
    vptr = &y;  // point to float
    printf("Void pointer: vptr=%p\n", vptr);
    printf("Void pointer value: %.2f\n", *( (float*)vptr ));  // cast needed

    // 4️⃣ Pointer to pointer
    int **pp = &p;  // pointer to pointer to int
    printf("Pointer to pointer: **pp=%d, *pp=%p, pp=%p\n", **pp, (void*)*pp, (void*)pp);

    // 5️⃣ Function pointer
    void (*fp)() = sayHello;
    fp();  // call function through pointer

    // 6️⃣ Array of pointers
    char *fruits[] = {"Apple", "Banana", "Cherry"};
    printf("Array of pointers:\n");
    for(int i = 0; i < 3; i++) {
        printf("fruits[%d]: %s\n", i, fruits[i]);
    }

    // 7️⃣ Dangling pointer (bad practice example)
    int *danglingPtr;
    {
        int temp = 42;
        danglingPtr = &temp; // valid inside this block
        printf("Inside block: *danglingPtr=%d\n", *danglingPtr);
    }
    // After block ends, temp is destroyed → danglingPtr is invalid
    // printf("Dangling pointer: *danglingPtr=%d\n", *danglingPtr); // undefined behavior!

    return 0;
}

