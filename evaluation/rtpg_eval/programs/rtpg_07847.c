int test_func(void) {
    int v0 = 61;
    int v1 = 11;
    int v2 = 54;
    int i;
    if (v2 > v0) { v2 = v0; }
    v0 = v0 * 4;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
