int __arr_9017[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 68;
    int v2 = 13;
    int v3 = 17;
    int v4 = 56;
    int i;
    for (i = 0; i < 10; i++) { __arr_9017[i] = v1 + i; }
    if (v1 > v4) { v1 = v4; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
