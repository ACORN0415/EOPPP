int test_func(void) {
    int v0 = 57;
    int v1 = 25;
    int v2 = 75;
    int v3 = 97;
    int v4 = 80;
    int v5 = 43;
    int i;
    v3 = v3 - v4;
    int *__p = &v3;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
