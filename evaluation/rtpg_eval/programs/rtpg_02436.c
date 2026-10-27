int __arr_2436[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 72;
    int v2 = 3;
    int v3 = 74;
    int v4 = 51;
    int v5 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_2436[i] = v5 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
