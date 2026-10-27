int test_func(void) {
    int v0 = 86;
    int v1 = 38;
    int v2 = 56;
    int v3 = 51;
    int i;
    v1 = v1 + v1;
    v0 = v0 | v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
