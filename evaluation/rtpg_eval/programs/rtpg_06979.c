int __arr_6979[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 9;
    int v2 = 28;
    int v3 = 84;
    int v4 = 84;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 10; i++) { __arr_6979[i] = v4 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    v4 = v4 / (v0 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
