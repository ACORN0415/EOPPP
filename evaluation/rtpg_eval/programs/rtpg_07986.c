int test_func(void) {
    int v0 = 60;
    int v1 = 51;
    int v2 = 32;
    int v3 = 24;
    int v4 = 47;
    int v5 = 22;
    int v6 = 53;
    int v7 = 6;
    int i;
    v7 = 55;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    int *__p = &v5;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
