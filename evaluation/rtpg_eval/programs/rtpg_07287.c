int test_func(void) {
    int v0 = 20;
    int v1 = 69;
    int v2 = 100;
    int v3 = 87;
    int v4 = 88;
    int v5 = 42;
    int v6 = 42;
    int i;
    v2 = 21;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
