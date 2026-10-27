int test_func(void) {
    int v0 = 12;
    int v1 = 67;
    int v2 = 58;
    int v3 = 63;
    int v4 = 9;
    int v5 = 47;
    int v6 = 38;
    int v7 = 47;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v0;
    }
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
