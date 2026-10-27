int test_func(void) {
    int v0 = 95;
    int v1 = 62;
    int v2 = 5;
    int v3 = 27;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v3;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v0 = v0 | v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
