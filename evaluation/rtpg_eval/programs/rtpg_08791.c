int test_func(void) {
    int v0 = 92;
    int v1 = 42;
    int v2 = 42;
    int v3 = 100;
    int v4 = 31;
    int v5 = 32;
    int v6 = 29;
    int v7 = 98;
    int i;
    v1 = v1 * 7;
    v0 = v0 + v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
