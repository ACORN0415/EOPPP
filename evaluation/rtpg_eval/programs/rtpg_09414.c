int test_func(void) {
    int v0 = 7;
    int v1 = 72;
    int v2 = 27;
    int v3 = 53;
    int i;
    v3 = v3 - v2;
    v1 = 10;
    if (v3 > v2) { v3 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
