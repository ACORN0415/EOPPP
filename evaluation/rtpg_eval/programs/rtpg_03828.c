int test_func(void) {
    int v0 = 91;
    int v1 = 16;
    int v2 = 50;
    int v3 = 80;
    int v4 = 66;
    int v5 = 2;
    int v6 = 0;
    int v7 = 29;
    int i;
    if (v1 > v0) { v1 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
