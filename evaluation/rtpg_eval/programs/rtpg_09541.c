int __arr_9541[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 43;
    int v2 = 6;
    int v3 = 85;
    int v4 = 99;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_9541[i] = v0 + i; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v0 = v0 & v1;
    return v0;
}
int main(void) { return test_func(); }
