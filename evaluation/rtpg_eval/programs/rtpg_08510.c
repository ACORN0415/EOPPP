int test_func(void) {
    int v0 = 3;
    int v1 = 54;
    int v2 = 61;
    int v3 = 9;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v0;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
