int test_func(void) {
    int v0 = 8;
    int v1 = 71;
    int v2 = 33;
    int v3 = 77;
    int v4 = 62;
    int v5 = 81;
    int v6 = 43;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    v6 = v6 + v6;
    v0 = v0 - v6;
    int *__p = &v2;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
