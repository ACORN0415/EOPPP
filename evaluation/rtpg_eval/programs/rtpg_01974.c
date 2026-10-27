int test_func(void) {
    int v0 = 45;
    int v1 = 21;
    int v2 = 71;
    int v3 = 98;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v2;
    }
    if (v3 > v0) { v3 = v0; }
    v2 = v2 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
