int test_func(void) {
    int v0 = 79;
    int v1 = 8;
    int v2 = 36;
    int i;
    v0 = v0 * 3;
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
