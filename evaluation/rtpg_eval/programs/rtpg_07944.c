int __arr_7944[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 97;
    int v2 = 70;
    int v3 = 39;
    int v4 = 21;
    int v5 = 76;
    int i;
    for (i = 0; i < 10; i++) { __arr_7944[i] = v3 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v1 = v1 / (v0 + 1);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
