int __arr_350[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 41;
    int v2 = 68;
    int v3 = 61;
    int i;
    for (i = 0; i < 10; i++) { __arr_350[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
