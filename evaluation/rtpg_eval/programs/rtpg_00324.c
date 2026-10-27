int test_func(void) {
    int v0 = 51;
    int v1 = 52;
    int v2 = 27;
    int v3 = 56;
    int v4 = 48;
    int v5 = 39;
    int v6 = 87;
    int v7 = 27;
    int i;
    v5 = v5 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
