int __arr_7384[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 2;
    int v2 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_7384[i] = v2 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
