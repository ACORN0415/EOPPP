int __arr_6976[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 55;
    int v2 = 24;
    int v3 = 17;
    int v4 = 46;
    int i;
    v3 = 97;
    for (i = 0; i < 10; i++) { __arr_6976[i] = v0 + i; }
    v3 = v3 * 4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
