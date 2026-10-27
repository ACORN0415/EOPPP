int test_func(void) {
    int v0 = 88;
    int v1 = 87;
    int v2 = 48;
    int v3 = 99;
    int v4 = 54;
    int v5 = 86;
    int v6 = 32;
    int v7 = 67;
    int i;
    if (v1 > v2) { v1 = v2; }
    int *__p = &v6;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
