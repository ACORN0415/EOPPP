int test_func(void) {
    int v0 = 20;
    int v1 = 29;
    int v2 = 21;
    int v3 = 79;
    int v4 = 95;
    int i;
    if (v2 > v4) { v2 = v4; }
    int *__p = &v2;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
