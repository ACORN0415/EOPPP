int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 50;
    int v2 = 93;
    int v3 = 51;
    int v4 = 16;
    int v5 = 86;
    int v6 = 11;
    int v7 = 89;
    int i;
    v3 = v3 + v2;
    if (v5 > v0) { v5 = v0; }
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
