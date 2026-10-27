int test_func(void) {
    int v0 = 39;
    int v1 = 31;
    int v2 = 46;
    int v3 = 42;
    int i;
    v2 = v2 - v1;
    int *__p = &v3;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
