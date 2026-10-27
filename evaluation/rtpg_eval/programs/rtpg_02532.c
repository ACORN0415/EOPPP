int test_func(void) {
    int v0 = 33;
    int v1 = 95;
    int v2 = 100;
    int v3 = 35;
    int v4 = 38;
    int v5 = 75;
    int v6 = 53;
    int i;
    v6 = 82;
    v0 = v0 - v6;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
