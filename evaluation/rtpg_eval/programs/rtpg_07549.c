int test_func(void) {
    int v0 = 51;
    int v1 = 29;
    int v2 = 38;
    int v3 = 33;
    int v4 = 69;
    int i;
    v3 = v3 * 9;
    if (v0 > v1) { v0 = v1; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
