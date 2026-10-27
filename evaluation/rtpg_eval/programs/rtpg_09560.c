int test_func(void) {
    int v0 = 68;
    int v1 = 5;
    int v2 = 91;
    int i;
    v1 = 23;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
