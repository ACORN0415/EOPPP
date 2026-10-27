int __arr_8180[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 52;
    int v2 = 97;
    int i;
    v1 = 46;
    v1 = v1 * 10;
    for (i = 0; i < 10; i++) { __arr_8180[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
