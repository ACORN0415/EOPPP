int test_func(void) {
    int v0 = 69;
    int v1 = 38;
    int v2 = 41;
    int v3 = 29;
    int v4 = 38;
    int i;
    v1 = v1 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
