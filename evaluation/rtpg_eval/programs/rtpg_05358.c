int test_func(void) {
    int v0 = 52;
    int v1 = 56;
    int v2 = 73;
    int v3 = 91;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v3;
    }
    v2 = 79;
    if (v2 > v3) { v2 = v3; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
