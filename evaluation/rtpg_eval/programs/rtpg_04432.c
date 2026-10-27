int __arr_4432[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 90;
    int v2 = 92;
    int v3 = 22;
    int v4 = 36;
    int v5 = 55;
    int v6 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_4432[i] = v3 + i; }
    v0 = v0 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
