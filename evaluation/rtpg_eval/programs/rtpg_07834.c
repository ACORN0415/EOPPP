int test_func(void) {
    int v0 = 56;
    int v1 = 93;
    int v2 = 81;
    int v3 = 67;
    int v4 = 76;
    int v5 = 77;
    int i;
    v1 = v1 - v2;
    v5 = 2;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
