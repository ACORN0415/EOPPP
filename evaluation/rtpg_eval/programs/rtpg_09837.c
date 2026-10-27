int test_func(void) {
    int v0 = 10;
    int v1 = 55;
    int v2 = 12;
    int v3 = 24;
    int v4 = 87;
    int v5 = 53;
    int v6 = 36;
    int i;
    v3 = v3 + v2;
    v1 = v1 - v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
