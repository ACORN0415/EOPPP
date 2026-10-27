int __arr_6120[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 21;
    int v2 = 63;
    int v3 = 10;
    int v4 = 52;
    int i;
    for (i = 0; i < 10; i++) { __arr_6120[i] = v4 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
