int test_func(void) {
    int v0 = 44;
    int v1 = 36;
    int v2 = 30;
    int v3 = 55;
    int i;
    v3 = v3 - v0;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v1;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
