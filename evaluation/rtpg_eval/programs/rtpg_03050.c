int test_func(void) {
    int v0 = 31;
    int v1 = 93;
    int v2 = 32;
    int v3 = 84;
    int v4 = 80;
    int i;
    v2 = v2 * 9;
    v4 = v4 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
