int test_func(void) {
    int v0 = 100;
    int v1 = 45;
    int v2 = 69;
    int i;
    v2 = 69;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
