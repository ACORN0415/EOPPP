int test_func(void) {
    int v0 = 82;
    int v1 = 14;
    int v2 = 28;
    int v3 = 34;
    int v4 = 58;
    int v5 = 98;
    int v6 = 16;
    int v7 = 36;
    int i;
    v0 = v0 * 4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
