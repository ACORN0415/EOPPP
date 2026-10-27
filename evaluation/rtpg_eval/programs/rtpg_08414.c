int test_func(void) {
    int v0 = 59;
    int v1 = 79;
    int v2 = 39;
    int v3 = 64;
    int v4 = 73;
    int i;
    v2 = v2 * 6;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v0;
    }
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
