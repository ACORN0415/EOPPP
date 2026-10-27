int test_func(void) {
    int v0 = 37;
    int v1 = 44;
    int v2 = 3;
    int v3 = 15;
    int v4 = 31;
    int v5 = 17;
    int v6 = 25;
    int v7 = 93;
    int i;
    v2 = v2 * 3;
    if (v1 > v2) { v1 = v2; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v6 = v6 ^ v7;
    return v0;
}
int main(void) { return test_func(); }
