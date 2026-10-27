int test_func(void) {
    int v0 = 18;
    int v1 = 84;
    int v2 = 4;
    int v3 = 77;
    int v4 = 35;
    int v5 = 80;
    int v6 = 43;
    int v7 = 58;
    int i;
    if (v6 > v2) { v6 = v2; }
    int *__p = &v3;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
