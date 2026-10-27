int __arr_4061[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 79;
    int v2 = 61;
    int i;
    v2 = 46;
    for (i = 0; i < 10; i++) { __arr_4061[i] = v0 + i; }
    v2 = v2 ^ v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
