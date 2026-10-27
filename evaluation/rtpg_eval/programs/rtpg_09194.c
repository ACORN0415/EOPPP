int test_func(void) {
    int v0 = 30;
    int v1 = 28;
    int v2 = 83;
    int v3 = 87;
    int v4 = 46;
    int v5 = 47;
    int v6 = 75;
    int v7 = 56;
    int i;
    v5 = v5 * 8;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v2 = v2 & v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
