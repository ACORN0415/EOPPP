int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 68;
    int v2 = 40;
    int v3 = 0;
    int i;
    v1 = v1 + v0;
    int *__p = &v3;
    *__p = *__p + 1;
    v3 = __arr_didx[__idx_didx[0]];
    v0 = v0 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
