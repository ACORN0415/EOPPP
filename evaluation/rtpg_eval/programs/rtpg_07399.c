int __arr_7399[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 52;
    int v2 = 11;
    int v3 = 49;
    int v4 = 85;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 10; i++) { __arr_7399[i] = v0 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
