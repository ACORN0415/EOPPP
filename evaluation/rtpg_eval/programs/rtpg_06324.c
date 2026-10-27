int test_func(void) {
    int v0 = 29;
    int v1 = 26;
    int v2 = 74;
    int v3 = 28;
    int v4 = 15;
    int v5 = 2;
    int i;
    int *__p = &v5;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
