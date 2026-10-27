int __arr_3968[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 19;
    int v2 = 42;
    int v3 = 69;
    int i;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 10; i++) { __arr_3968[i] = v3 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
