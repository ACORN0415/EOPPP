int test_func(void) {
    int v0 = 5;
    int v1 = 7;
    int v2 = 12;
    int v3 = 11;
    int i;
    v0 = 93;
    v0 = v0 - v1;
    int *__p = &v1;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
