int test_func(void) {
    int v0 = 88;
    int v1 = 14;
    int v2 = 68;
    int v3 = 71;
    int v4 = 27;
    int v5 = 53;
    int v6 = 68;
    int i;
    v3 = v3 + v4;
    v4 = v4 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
