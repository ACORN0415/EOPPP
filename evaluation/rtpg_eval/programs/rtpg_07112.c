int __arr_7112[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 13;
    int v2 = 74;
    int v3 = 25;
    int v4 = 29;
    int v5 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_7112[i] = v2 + i; }
    v1 = v1 + v0;
    v3 = v3 | v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
