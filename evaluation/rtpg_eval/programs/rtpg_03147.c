int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 15;
    int v2 = 83;
    int i;
    if (v1 > v2) { v1 = v2; }
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
