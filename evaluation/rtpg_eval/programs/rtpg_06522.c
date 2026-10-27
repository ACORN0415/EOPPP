int test_func(void) {
    int v0 = 90;
    int v1 = 88;
    int v2 = 53;
    int v3 = 82;
    int v4 = 37;
    int v5 = 51;
    int v6 = 69;
    int v7 = 88;
    int i;
    v6 = v6 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
