int __arr_912[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 20;
    int v2 = 13;
    int v3 = 31;
    int v4 = 94;
    int v5 = 61;
    int i;
    v5 = v5 - v0;
    for (i = 0; i < 10; i++) { __arr_912[i] = v5 + i; }
    v4 = 79;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
