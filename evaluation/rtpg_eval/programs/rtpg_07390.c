int test_func(void) {
    int v0 = 45;
    int v1 = 54;
    int v2 = 18;
    int v3 = 50;
    int i;
    if (v0 > v2) { v0 = v2; }
    v2 = v2 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
