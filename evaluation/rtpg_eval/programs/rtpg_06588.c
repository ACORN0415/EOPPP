int __arr_6588[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 81;
    int v2 = 18;
    int v3 = 22;
    int v4 = 67;
    int i;
    v1 = v1 - v3;
    v3 = v3 + v2;
    for (i = 0; i < 10; i++) { __arr_6588[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
