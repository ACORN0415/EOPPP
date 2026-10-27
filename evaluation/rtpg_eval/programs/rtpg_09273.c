int test_func(void) {
    int v0 = 11;
    int v1 = 30;
    int v2 = 41;
    int v3 = 43;
    int v4 = 34;
    int v5 = 79;
    int i;
    v3 = 16;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v0 = v0 | v5;
    return v0;
}
int main(void) { return test_func(); }
