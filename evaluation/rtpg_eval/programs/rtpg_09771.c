int test_func(void) {
    int v0 = 86;
    int v1 = 60;
    int v2 = 43;
    int v3 = 25;
    int v4 = 20;
    int v5 = 67;
    int v6 = 35;
    int v7 = 37;
    int i;
    v6 = v6 - v5;
    if (v7 > v6) { v7 = v6; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
