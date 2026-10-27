int test_func(void) {
    int v0 = 33;
    int v1 = 86;
    int v2 = 93;
    int i;
    v1 = v1 * 10;
    v1 = v1 % (v2 + 1);
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
