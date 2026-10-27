int test_func(void) {
    int v0 = 11;
    int v1 = 45;
    int v2 = 16;
    int v3 = 67;
    int i;
    v1 = v1 * 6;
    v3 = v3 + v0;
    if (v0 > v1) { v0 = v1; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
