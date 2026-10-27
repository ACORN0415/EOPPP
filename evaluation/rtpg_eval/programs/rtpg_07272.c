int test_func(void) {
    int v0 = 33;
    int v1 = 95;
    int v2 = 21;
    int v3 = 78;
    int v4 = 93;
    int v5 = 40;
    int v6 = 85;
    int v7 = 25;
    int i;
    if (v5 > v0) { v5 = v0; }
    v4 = v4 * 5;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
