int test_func(void) {
    int v0 = 37;
    int v1 = 71;
    int v2 = 67;
    int v3 = 9;
    int v4 = 7;
    int v5 = 3;
    int i;
    v3 = v3 * 8;
    v2 = v2 + v1;
    int *__p = &v3;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
