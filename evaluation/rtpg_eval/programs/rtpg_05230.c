int __arr_5230[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 29;
    int v2 = 42;
    int v3 = 67;
    int v4 = 19;
    int v5 = 84;
    int v6 = 53;
    int v7 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_5230[i] = v3 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
