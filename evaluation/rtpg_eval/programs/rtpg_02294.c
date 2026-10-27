int test_func(void) {
    int v0 = 86;
    int v1 = 60;
    int v2 = 35;
    int i;
    v2 = v2 - v0;
    v1 = 81;
    v0 = v0 * 10;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
