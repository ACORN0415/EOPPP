int test_func(void) {
    int v0 = 50;
    int v1 = 47;
    int v2 = 92;
    int v3 = 10;
    int v4 = 29;
    int v5 = 99;
    int v6 = 75;
    int v7 = 56;
    int i;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v3 = v3 | v2;
    return v0;
}
int main(void) { return test_func(); }
