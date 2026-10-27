int test_func(void) {
    int v0 = 6;
    int v1 = 92;
    int v2 = 23;
    int i;
    v2 = v2 * 5;
    v0 = 44;
    v2 = v2 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
