int test_func(void) {
    int v0 = 7;
    int v1 = 77;
    int v2 = 30;
    int v3 = 54;
    int v4 = 53;
    int v5 = 26;
    int v6 = 87;
    int i;
    v6 = v6 * 8;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
