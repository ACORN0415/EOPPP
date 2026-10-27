int __arr_5718[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 45;
    int v2 = 94;
    int v3 = 98;
    int v4 = 11;
    int v5 = 59;
    int v6 = 67;
    int v7 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_5718[i] = v2 + i; }
    v3 = v3 * 5;
    v1 = v1 + v1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
