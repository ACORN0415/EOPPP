int test_func(void) {
    int v0 = 78;
    int v1 = 55;
    int v2 = 19;
    int v3 = 36;
    int v4 = 78;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v4;
    }
    v2 = 99;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
