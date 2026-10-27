int __arr_8938[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 6;
    int v2 = 8;
    int i;
    for (i = 0; i < 10; i++) { __arr_8938[i] = v1 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
