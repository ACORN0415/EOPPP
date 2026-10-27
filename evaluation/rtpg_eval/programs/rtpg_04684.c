int test_func(void) {
    int v0 = 28;
    int v1 = 68;
    int v2 = 19;
    int v3 = 77;
    int v4 = 87;
    int v5 = 61;
    int i;
    v5 = v5 - v3;
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = v4 & v0;
    return v0;
}
int main(void) { return test_func(); }
