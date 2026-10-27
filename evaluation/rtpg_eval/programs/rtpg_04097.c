int test_func(void) {
    int v0 = 73;
    int v1 = 14;
    int v2 = 11;
    int v3 = 41;
    int v4 = 67;
    int v5 = 41;
    int v6 = 19;
    int v7 = 92;
    int i;
    v3 = 50;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v5 = v5 | v4;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
