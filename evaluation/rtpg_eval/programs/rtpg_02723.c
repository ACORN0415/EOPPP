int test_func(void) {
    int v0 = 45;
    int v1 = 63;
    int v2 = 95;
    int v3 = 54;
    int i;
    v3 = v3 + v1;
    if (v3 > v0) { v3 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
