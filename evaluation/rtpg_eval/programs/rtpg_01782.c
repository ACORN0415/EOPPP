int test_func(void) {
    int v0 = 89;
    int v1 = 81;
    int v2 = 52;
    int v3 = 9;
    int v4 = 79;
    int v5 = 30;
    int v6 = 32;
    int v7 = 65;
    int i;
    if (v0 > v4) { v0 = v4; }
    v6 = v6 + v6;
    int *__p = &v4;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
