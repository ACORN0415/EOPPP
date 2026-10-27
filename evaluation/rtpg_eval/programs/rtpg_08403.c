int test_func(void) {
    int v0 = 78;
    int v1 = 58;
    int v2 = 52;
    int v3 = 67;
    int i;
    v0 = v0 * 4;
    v0 = v0 - v3;
    v1 = 84;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
