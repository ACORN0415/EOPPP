int test_func(void) {
    int v0 = 1;
    int v1 = 11;
    int v2 = 49;
    int i;
    v1 = v1 + v0;
    if (v0 > v2) { v0 = v2; }
    int *__p = &v1;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
