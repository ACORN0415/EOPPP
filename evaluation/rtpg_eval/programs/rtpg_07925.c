int __arr_7925[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 30;
    int v2 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_7925[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
