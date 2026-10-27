int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 72;
    int v2 = 90;
    int v3 = 71;
    int i;
    v1 = v1 * 2;
    v1 = v1 % (v2 + 1);
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
