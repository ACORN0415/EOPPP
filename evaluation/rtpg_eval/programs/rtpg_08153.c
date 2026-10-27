int test_func(void) {
    int v0 = 44;
    int v1 = 16;
    int v2 = 95;
    int v3 = 93;
    int v4 = 29;
    int v5 = 62;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v3;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
