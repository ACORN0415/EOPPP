int test_func(void) {
    int v0 = 25;
    int v1 = 88;
    int v2 = 86;
    int v3 = 33;
    int v4 = 71;
    int v5 = 0;
    int v6 = 26;
    int i;
    if (v2 > v3) { v2 = v3; }
    v6 = v6 + v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
