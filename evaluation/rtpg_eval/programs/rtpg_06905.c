int test_func(void) {
    int v0 = 32;
    int v1 = 83;
    int v2 = 34;
    int i;
    v0 = v0 + v2;
    v1 = v1 - v2;
    if (v1 > v0) { v1 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    int *__p = &v0;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
