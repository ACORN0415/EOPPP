int test_func(void) {
    int v0 = 27;
    int v1 = 77;
    int v2 = 4;
    int v3 = 51;
    int i;
    v2 = 66;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
