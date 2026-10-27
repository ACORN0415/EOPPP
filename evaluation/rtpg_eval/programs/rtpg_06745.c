int test_func(void) {
    int v0 = 42;
    int v1 = 86;
    int v2 = 47;
    int v3 = 6;
    int v4 = 58;
    int i;
    if (v4 > v4) { v4 = v4; }
    v4 = 23;
    v4 = v4 - v0;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
