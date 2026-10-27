int test_func(void) {
    int v0 = 17;
    int v1 = 16;
    int v2 = 98;
    int v3 = 44;
    int v4 = 69;
    int v5 = 26;
    int v6 = 53;
    int i;
    v4 = v4 * 2;
    v1 = 71;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v5;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
