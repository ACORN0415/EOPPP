int test_func(void) {
    int v0 = 15;
    int v1 = 85;
    int v2 = 99;
    int v3 = 3;
    int v4 = 27;
    int i;
    for (i = 0; i < 19; i++) {
        v4 = v4 + v1;
    }
    v4 = v4 + v3;
    int *__p = &v4;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
