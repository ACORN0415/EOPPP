int __arr_6430[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 70;
    int v2 = 25;
    int v3 = 69;
    int i;
    v2 = 100;
    v0 = v0 - v3;
    for (i = 0; i < 10; i++) { __arr_6430[i] = v3 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 | v2;
    return v0;
}
int main(void) { return test_func(); }
