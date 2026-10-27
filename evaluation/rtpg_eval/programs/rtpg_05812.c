int test_func(void) {
    int v0 = 62;
    int v1 = 86;
    int v2 = 100;
    int v3 = 72;
    int v4 = 96;
    int v5 = 80;
    int v6 = 46;
    int v7 = 19;
    int i;
    v1 = v1 * 9;
    v7 = v7 - v6;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
