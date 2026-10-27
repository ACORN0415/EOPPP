int test_func(void) {
    int v0 = 42;
    int v1 = 28;
    int v2 = 98;
    int v3 = 20;
    int v4 = 70;
    int v5 = 44;
    int i;
    v3 = v3 * 6;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
