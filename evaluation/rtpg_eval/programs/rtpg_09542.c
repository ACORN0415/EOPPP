int __arr_9542[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 37;
    int v2 = 11;
    int v3 = 49;
    int v4 = 32;
    int v5 = 51;
    int v6 = 73;
    int i;
    for (i = 0; i < 10; i++) { __arr_9542[i] = v1 + i; }
    v2 = v2 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
