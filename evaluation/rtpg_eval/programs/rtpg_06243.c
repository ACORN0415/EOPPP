int test_func(void) {
    int v0 = 99;
    int v1 = 55;
    int v2 = 84;
    int i;
    v1 = v1 - v0;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 % (v1 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
