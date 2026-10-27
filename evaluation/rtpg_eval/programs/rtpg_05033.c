int __arr_5033[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 41;
    int v2 = 23;
    int v3 = 96;
    int v4 = 65;
    int v5 = 54;
    int v6 = 33;
    int v7 = 80;
    int i;
    v7 = v7 * 5;
    for (i = 0; i < 10; i++) { __arr_5033[i] = v4 + i; }
    int *__p = &v2;
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
