int __arr_8947[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 92;
    int v2 = 82;
    int v3 = 31;
    int v4 = 45;
    int v5 = 16;
    int i;
    v4 = v4 - v2;
    for (i = 0; i < 10; i++) { __arr_8947[i] = v1 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
