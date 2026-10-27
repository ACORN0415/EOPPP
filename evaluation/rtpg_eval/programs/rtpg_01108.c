int test_func(void) {
    int v0 = 35;
    int v1 = 18;
    int v2 = 63;
    int v3 = 13;
    int v4 = 81;
    int i;
    v3 = v3 + v4;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v1;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
