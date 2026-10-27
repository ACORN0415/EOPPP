int test_func(void) {
    int v0 = 41;
    int v1 = 46;
    int v2 = 29;
    int v3 = 77;
    int v4 = 23;
    int v5 = 41;
    int v6 = 63;
    int i;
    if (v6 > v5) { v6 = v5; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
