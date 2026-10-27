int test_func(void) {
    int v0 = 74;
    int v1 = 3;
    int v2 = 97;
    int v3 = 98;
    int v4 = 85;
    int v5 = 67;
    int v6 = 31;
    int i;
    v5 = v5 * 10;
    v5 = v5 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v5 = v5 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
