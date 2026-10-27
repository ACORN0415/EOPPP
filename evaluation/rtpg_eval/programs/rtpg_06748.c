int test_func(void) {
    int v0 = 76;
    int v1 = 64;
    int v2 = 74;
    int v3 = 26;
    int v4 = 16;
    int i;
    v0 = v0 + v4;
    v0 = v0 * 10;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
