int test_func(void) {
    int v0 = 69;
    int v1 = 28;
    int v2 = 65;
    int v3 = 83;
    int v4 = 44;
    int v5 = 22;
    int i;
    v1 = v1 * 7;
    v0 = 46;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
