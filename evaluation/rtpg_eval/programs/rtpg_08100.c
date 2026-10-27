int test_func(void) {
    int v0 = 85;
    int v1 = 45;
    int v2 = 30;
    int v3 = 71;
    int v4 = 24;
    int v5 = 15;
    int v6 = 50;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
