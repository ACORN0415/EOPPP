int test_func(void) {
    int v0 = 29;
    int v1 = 81;
    int v2 = 80;
    int v3 = 3;
    int v4 = 33;
    int i;
    v4 = v4 * 6;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
