int test_func(void) {
    int v0 = 16;
    int v1 = 30;
    int v2 = 54;
    int v3 = 15;
    int v4 = 9;
    int v5 = 94;
    int v6 = 4;
    int v7 = 33;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v7;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
