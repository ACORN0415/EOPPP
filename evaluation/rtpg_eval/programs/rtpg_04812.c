int test_func(void) {
    int v0 = 20;
    int v1 = 14;
    int v2 = 88;
    int v3 = 87;
    int v4 = 67;
    int v5 = 69;
    int i;
    v0 = 74;
    if (v2 > v5) { v2 = v5; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
