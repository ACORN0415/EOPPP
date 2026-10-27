int test_func(void) {
    int v0 = 44;
    int v1 = 92;
    int v2 = 32;
    int i;
    v1 = v1 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
