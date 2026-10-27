int test_func(void) {
    int v0 = 16;
    int v1 = 17;
    int v2 = 34;
    int v3 = 36;
    int v4 = 47;
    int v5 = 10;
    int i;
    v5 = v5 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
