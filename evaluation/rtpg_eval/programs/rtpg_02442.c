int test_func(void) {
    int v0 = 96;
    int v1 = 41;
    int v2 = 5;
    int v3 = 15;
    int i;
    v1 = v1 + v2;
    v1 = 77;
    v1 = v1 - v2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
