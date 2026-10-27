int __arr_887[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 60;
    int v2 = 53;
    int i;
    for (i = 0; i < 10; i++) { __arr_887[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
