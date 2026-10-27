int __arr_2574[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 3;
    int v2 = 96;
    int v3 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_2574[i] = v3 + i; }
    if (v3 > v2) { v3 = v2; }
    int *__p = &v1;
    *__p = *__p + 1;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
