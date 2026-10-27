int test_func(void) {
    int v0 = 95;
    int v1 = 95;
    int v2 = 59;
    int v3 = 42;
    int v4 = 19;
    int v5 = 32;
    int v6 = 55;
    int v7 = 30;
    int i;
    v7 = v7 - v5;
    v3 = v3 * 8;
    v4 = 59;
    v0 = v0 / (v6 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
