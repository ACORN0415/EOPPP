int test_func(void) {
    int v0 = 74;
    int v1 = 6;
    int v2 = 26;
    int v3 = 34;
    int v4 = 86;
    int i;
    v1 = 97;
    v2 = v2 - v4;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v4;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
