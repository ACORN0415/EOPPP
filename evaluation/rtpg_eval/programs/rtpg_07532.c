int __arr_7532[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 83;
    int v2 = 29;
    int v3 = 49;
    int v4 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_7532[i] = v4 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
