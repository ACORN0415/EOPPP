int test_func(void) {
    int v0 = 14;
    int v1 = 29;
    int v2 = 30;
    int v3 = 78;
    int v4 = 30;
    int i;
    v2 = 21;
    v1 = v1 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 ^ v3;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
