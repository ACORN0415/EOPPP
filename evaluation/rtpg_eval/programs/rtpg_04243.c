int test_func(void) {
    int v0 = 15;
    int v1 = 69;
    int v2 = 68;
    int v3 = 32;
    int i;
    if (v1 > v1) { v1 = v1; }
    v0 = v0 + v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
