int test_func(void) {
    int v0 = 81;
    int v1 = 98;
    int v2 = 17;
    int v3 = 62;
    int v4 = 41;
    int v5 = 96;
    int v6 = 52;
    int v7 = 9;
    int i;
    v1 = v1 * 10;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v3;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v5;
    *__p = *__p + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
