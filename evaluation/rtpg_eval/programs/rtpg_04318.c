int test_func(void) {
    int v0 = 58;
    int v1 = 81;
    int v2 = 64;
    int v3 = 13;
    int i;
    if (v3 > v1) { v3 = v1; }
    v3 = v3 * 3;
    v3 = 87;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
