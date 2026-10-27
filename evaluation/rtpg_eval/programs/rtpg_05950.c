int test_func(void) {
    int v0 = 61;
    int v1 = 69;
    int v2 = 50;
    int v3 = 1;
    int v4 = 10;
    int v5 = 3;
    int v6 = 18;
    int v7 = 100;
    int i;
    v2 = v2 * 6;
    v6 = v6 - v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
