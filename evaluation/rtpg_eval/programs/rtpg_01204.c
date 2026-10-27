int __arr_1204[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 36;
    int v2 = 46;
    int v3 = 18;
    int v4 = 82;
    int v5 = 5;
    int i;
    for (i = 0; i < 10; i++) { __arr_1204[i] = v0 + i; }
    for (i = 0; i < 19; i++) {
        v4 = v4 + v4;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v0 = v0 | v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
