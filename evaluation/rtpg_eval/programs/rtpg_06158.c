int test_func(void) {
    int v0 = 49;
    int v1 = 3;
    int v2 = 77;
    int v3 = 35;
    int v4 = 80;
    int v5 = 96;
    int v6 = 1;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v6;
    }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
