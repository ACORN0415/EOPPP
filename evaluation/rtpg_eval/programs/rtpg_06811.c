int test_func(void) {
    int v0 = 88;
    int v1 = 46;
    int v2 = 96;
    int i;
    if (v1 > v0) { v1 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
