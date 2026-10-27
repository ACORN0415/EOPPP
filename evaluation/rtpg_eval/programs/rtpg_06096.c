int test_func(void) {
    int v0 = 67;
    int v1 = 21;
    int v2 = 20;
    int v3 = 45;
    int i;
    v2 = v2 * 8;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
