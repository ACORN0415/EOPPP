int test_func(void) {
    int v0 = 78;
    int v1 = 32;
    int v2 = 59;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    v0 = v0 / (v2 + 1);
    int *__p = &v1;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
