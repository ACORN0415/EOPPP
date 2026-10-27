int test_func(void) {
    int v0 = 16;
    int v1 = 14;
    int v2 = 24;
    int v3 = 43;
    int v4 = 54;
    int v5 = 24;
    int v6 = 53;
    int v7 = 42;
    int i;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
