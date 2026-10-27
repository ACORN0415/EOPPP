int __arr_7431[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 50;
    int v2 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_7431[i] = v2 + i; }
    v2 = v2 * 3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
