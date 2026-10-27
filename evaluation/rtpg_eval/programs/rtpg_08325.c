int test_func(void) {
    int v0 = 47;
    int v1 = 40;
    int v2 = 16;
    int v3 = 71;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v3;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
