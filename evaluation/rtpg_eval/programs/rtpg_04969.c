int test_func(void) {
    int v0 = 27;
    int v1 = 69;
    int v2 = 65;
    int v3 = 98;
    int i;
    v3 = v3 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
