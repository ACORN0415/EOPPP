int test_func(void) {
    int v0 = 67;
    int v1 = 9;
    int v2 = 79;
    int v3 = 76;
    int i;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v2;
    }
    v0 = v0 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
