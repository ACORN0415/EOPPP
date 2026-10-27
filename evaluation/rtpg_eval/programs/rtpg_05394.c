int __arr_5394[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 1;
    int v2 = 38;
    int v3 = 88;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v3;
    }
    v3 = v3 * 6;
    for (i = 0; i < 10; i++) { __arr_5394[i] = v0 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v1 = v1 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
