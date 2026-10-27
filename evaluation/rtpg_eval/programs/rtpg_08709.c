int test_func(void) {
    int v0 = 19;
    int v1 = 6;
    int v2 = 98;
    int v3 = 83;
    int v4 = 87;
    int v5 = 81;
    int v6 = 86;
    int v7 = 3;
    int i;
    if (v5 > v7) { v5 = v7; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
