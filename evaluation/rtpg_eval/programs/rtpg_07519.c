int test_func(void) {
    int v0 = 27;
    int v1 = 19;
    int v2 = 100;
    int v3 = 14;
    int v4 = 71;
    int v5 = 93;
    int v6 = 81;
    int v7 = 30;
    int i;
    v1 = v1 - v7;
    v5 = v5 + v7;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
