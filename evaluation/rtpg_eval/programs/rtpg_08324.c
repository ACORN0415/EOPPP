int test_func(void) {
    int v0 = 13;
    int v1 = 68;
    int v2 = 40;
    int i;
    v0 = 38;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v1;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
