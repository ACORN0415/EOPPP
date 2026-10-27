int __arr_8278[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 13;
    int v2 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_8278[i] = v2 + i; }
    v2 = v2 + v2;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
