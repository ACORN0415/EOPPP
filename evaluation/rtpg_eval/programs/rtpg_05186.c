int __arr_5186[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 88;
    int v2 = 71;
    int i;
    v1 = v1 + v2;
    for (i = 0; i < 10; i++) { __arr_5186[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
