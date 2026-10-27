int __arr_7154[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 46;
    int v2 = 13;
    int v3 = 55;
    int i;
    v0 = v0 + v1;
    v2 = v2 * 4;
    for (i = 0; i < 10; i++) { __arr_7154[i] = v2 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
