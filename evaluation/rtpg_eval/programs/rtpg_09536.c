int test_func(void) {
    int v0 = 61;
    int v1 = 40;
    int v2 = 33;
    int i;
    v2 = 70;
    int *__p = &v0;
    *__p = *__p + 1;
    v1 = v1 / (v2 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
