int __arr_9787[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 78;
    int v2 = 59;
    int v3 = 19;
    int v4 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_9787[i] = v0 + i; }
    if (v1 > v2) { v1 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
