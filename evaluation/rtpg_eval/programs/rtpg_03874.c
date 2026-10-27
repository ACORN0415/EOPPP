int __arr_3874[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 15;
    int v2 = 60;
    int v3 = 24;
    int v4 = 22;
    int v5 = 86;
    int i;
    v5 = v5 + v5;
    v2 = 77;
    for (i = 0; i < 10; i++) { __arr_3874[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
