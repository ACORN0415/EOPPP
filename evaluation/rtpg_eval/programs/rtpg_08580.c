int __arr_8580[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 23;
    int v2 = 31;
    int v3 = 7;
    int i;
    for (i = 0; i < 10; i++) { __arr_8580[i] = v2 + i; }
    v1 = 62;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
