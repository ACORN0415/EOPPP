int test_func(void) {
    int v0 = 91;
    int v1 = 59;
    int v2 = 3;
    int v3 = 16;
    int i;
    v0 = v0 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
