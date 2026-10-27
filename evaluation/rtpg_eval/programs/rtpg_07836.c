int test_func(void) {
    int v0 = 13;
    int v1 = 53;
    int v2 = 10;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    if (v0 > v2) { v0 = v2; }
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
