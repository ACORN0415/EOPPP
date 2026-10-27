int test_func(void) {
    int v0 = 94;
    int v1 = 87;
    int v2 = 99;
    int v3 = 52;
    int v4 = 74;
    int v5 = 100;
    int i;
    v5 = v5 + v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
