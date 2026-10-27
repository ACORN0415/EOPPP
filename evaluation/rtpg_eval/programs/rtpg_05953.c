int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 55;
    int v2 = 17;
    int v3 = 82;
    int i;
    v2 = v2 + v2;
    v0 = v0 * 7;
    v3 = 29;
    int *__p = &v1;
    *__p = *__p + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
