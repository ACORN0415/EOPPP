int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 86;
    int v2 = 21;
    int v3 = 35;
    int v4 = 45;
    int v5 = 68;
    int i;
    v2 = v2 + v1;
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = v2 / (v0 + 1);
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
