int test_func(void) {
    int v0 = 92;
    int v1 = 37;
    int v2 = 83;
    int v3 = 11;
    int v4 = 65;
    int v5 = 29;
    int i;
    if (v0 > v1) { v0 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
