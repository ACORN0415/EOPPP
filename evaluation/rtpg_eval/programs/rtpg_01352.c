int test_func(void) {
    int v0 = 81;
    int v1 = 78;
    int v2 = 88;
    int v3 = 5;
    int v4 = 43;
    int v5 = 29;
    int v6 = 31;
    int v7 = 93;
    int i;
    v6 = 37;
    v2 = v2 + v3;
    if (v0 > v2) { v0 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
