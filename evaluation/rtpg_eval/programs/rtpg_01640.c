int __arr_1640[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 64;
    int v2 = 68;
    int v3 = 3;
    int v4 = 47;
    int i;
    for (i = 0; i < 10; i++) { __arr_1640[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
