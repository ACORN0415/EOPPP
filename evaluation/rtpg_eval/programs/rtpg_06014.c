int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 76;
    int v2 = 84;
    int v3 = 74;
    int v4 = 79;
    int v5 = 25;
    int i;
    v1 = v1 * 7;
    if (v0 > v5) { v0 = v5; }
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
