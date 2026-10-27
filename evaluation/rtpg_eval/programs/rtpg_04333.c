int test_func(void) {
    int v0 = 45;
    int v1 = 98;
    int v2 = 57;
    int v3 = 45;
    int v4 = 97;
    int v5 = 69;
    int v6 = 36;
    int v7 = 78;
    int i;
    v1 = v1 - v4;
    v2 = v2 * 4;
    int *__p = &v6;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
