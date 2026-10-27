int __arr_2773[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 84;
    int v2 = 67;
    int v3 = 59;
    int v4 = 67;
    int i;
    for (i = 0; i < 10; i++) { __arr_2773[i] = v4 + i; }
    v3 = v3 - v2;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
