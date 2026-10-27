int test_func(void) {
    int v0 = 49;
    int v1 = 88;
    int v2 = 15;
    int v3 = 8;
    int i;
    v1 = v1 + v2;
    int *__p = &v1;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
