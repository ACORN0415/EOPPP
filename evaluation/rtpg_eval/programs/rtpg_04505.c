int test_func(void) {
    int v0 = 26;
    int v1 = 26;
    int v2 = 60;
    int i;
    v1 = v1 * 2;
    v0 = 16;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
