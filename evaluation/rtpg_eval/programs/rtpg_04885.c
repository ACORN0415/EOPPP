int test_func(void) {
    int v0 = 2;
    int v1 = 28;
    int v2 = 42;
    int v3 = 27;
    int v4 = 72;
    int v5 = 45;
    int v6 = 3;
    int v7 = 6;
    int i;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
