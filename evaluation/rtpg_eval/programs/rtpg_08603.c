int __arr_8603[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 20;
    int v2 = 45;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 10; i++) { __arr_8603[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
