int test_func(void) {
    int v0 = 2;
    int v1 = 29;
    int v2 = 69;
    int v3 = 23;
    int v4 = 82;
    int i;
    if (v0 > v1) { v0 = v1; }
    v2 = 16;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
