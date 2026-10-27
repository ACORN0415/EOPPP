int __arr_8956[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 44;
    int v2 = 99;
    int v3 = 86;
    int v4 = 10;
    int i;
    for (i = 0; i < 10; i++) { __arr_8956[i] = v1 + i; }
    v1 = 39;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
