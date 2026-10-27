int test_func(void) {
    int v0 = 60;
    int v1 = 67;
    int v2 = 90;
    int v3 = 60;
    int v4 = 62;
    int v5 = 56;
    int v6 = 78;
    int i;
    v4 = 9;
    for (i = 0; i < 19; i++) {
        v6 = v6 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
