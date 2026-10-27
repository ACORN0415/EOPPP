int test_func(void) {
    int v0 = 75;
    int v1 = 50;
    int v2 = 40;
    int v3 = 24;
    int v4 = 72;
    int v5 = 2;
    int v6 = 87;
    int i;
    v3 = v3 - v5;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
