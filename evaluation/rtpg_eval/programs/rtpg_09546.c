int __arr_9546[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 55;
    int v2 = 35;
    int v3 = 30;
    int i;
    for (i = 0; i < 10; i++) { __arr_9546[i] = v2 + i; }
    v1 = v1 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
