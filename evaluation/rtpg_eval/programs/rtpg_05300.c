int test_func(void) {
    int v0 = 41;
    int v1 = 46;
    int v2 = 36;
    int i;
    if (v2 > v1) { v2 = v1; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
