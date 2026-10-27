int test_func(void) {
    int v0 = 60;
    int v1 = 73;
    int v2 = 31;
    int v3 = 4;
    int i;
    v1 = v1 * 9;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
