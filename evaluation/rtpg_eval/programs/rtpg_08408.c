int __arr_8408[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 34;
    int v2 = 52;
    int v3 = 23;
    int v4 = 15;
    int v5 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_8408[i] = v3 + i; }
    v3 = v3 - v0;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v3;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
