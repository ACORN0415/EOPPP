int __arr_6616[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 71;
    int v2 = 29;
    int v3 = 18;
    int v4 = 60;
    int v5 = 46;
    int v6 = 53;
    int i;
    for (i = 0; i < 10; i++) { __arr_6616[i] = v3 + i; }
    int *__p = &v6;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
