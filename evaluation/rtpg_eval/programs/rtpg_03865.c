int test_func(void) {
    int v0 = 82;
    int v1 = 26;
    int v2 = 0;
    int i;
    v2 = 28;
    if (v2 > v0) { v2 = v0; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
