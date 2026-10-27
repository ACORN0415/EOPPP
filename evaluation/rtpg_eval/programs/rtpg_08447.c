int __arr_8447[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 40;
    int v2 = 49;
    int v3 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_8447[i] = v0 + i; }
    v0 = v0 * 4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
