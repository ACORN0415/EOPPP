int __arr_1876[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 11;
    int v2 = 50;
    int v3 = 1;
    int v4 = 72;
    int v5 = 33;
    int v6 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_1876[i] = v1 + i; }
    for (i = 0; i < 17; i++) {
        v2 = v2 + v5;
    }
    v6 = 67;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
