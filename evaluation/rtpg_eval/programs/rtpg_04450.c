int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 68;
    int v2 = 90;
    int v3 = 39;
    int v4 = 47;
    int v5 = 47;
    int v6 = 17;
    int i;
    v6 = 13;
    v3 = v3 % (v1 + 1);
    int *__p = &v2;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
