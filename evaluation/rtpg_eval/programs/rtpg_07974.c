int __arr_7974[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 65;
    int v2 = 9;
    int v3 = 63;
    int i;
    for (i = 0; i < 10; i++) { __arr_7974[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
