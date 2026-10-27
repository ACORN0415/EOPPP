int __arr_4984[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 22;
    int v2 = 96;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 10; i++) { __arr_4984[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
