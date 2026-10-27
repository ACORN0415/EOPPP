int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 53;
    int v2 = 79;
    int i;
    v2 = v2 + v1;
    v0 = 8;
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
