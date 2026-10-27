int test_func(void) {
    int v0 = 17;
    int v1 = 80;
    int v2 = 62;
    int v3 = 56;
    int v4 = 15;
    int v5 = 98;
    int v6 = 37;
    int i;
    if (v4 > v3) { v4 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    v2 = v2 & v1;
    return v0;
}
int main(void) { return test_func(); }
