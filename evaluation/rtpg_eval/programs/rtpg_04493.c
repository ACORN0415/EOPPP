int test_func(void) {
    int v0 = 93;
    int v1 = 24;
    int v2 = 15;
    int v3 = 13;
    int i;
    v2 = v2 * 7;
    v1 = v1 % (v0 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
