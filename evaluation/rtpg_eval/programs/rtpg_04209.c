int test_func(void) {
    int v0 = 20;
    int v1 = 68;
    int v2 = 61;
    int v3 = 100;
    int v4 = 32;
    int v5 = 31;
    int i;
    if (v3 > v1) { v3 = v1; }
    int *__p = &v4;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
