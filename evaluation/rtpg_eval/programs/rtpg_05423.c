int test_func(void) {
    int v0 = 2;
    int v1 = 84;
    int v2 = 30;
    int v3 = 52;
    int v4 = 18;
    int v5 = 5;
    int i;
    v3 = v3 + v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v4;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
