int test_func(void) {
    int v0 = 29;
    int v1 = 92;
    int v2 = 34;
    int i;
    v0 = 20;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
