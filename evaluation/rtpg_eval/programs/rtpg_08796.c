int test_func(void) {
    int v0 = 37;
    int v1 = 34;
    int v2 = 73;
    int v3 = 62;
    int v4 = 65;
    int v5 = 49;
    int i;
    v5 = v5 * 7;
    v1 = v1 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
