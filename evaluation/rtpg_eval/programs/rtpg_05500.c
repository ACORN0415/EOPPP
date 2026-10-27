int __arr_5500[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 45;
    int v2 = 46;
    int i;
    v0 = v0 * 10;
    for (i = 0; i < 10; i++) { __arr_5500[i] = v0 + i; }
    if (v0 > v2) { v0 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
