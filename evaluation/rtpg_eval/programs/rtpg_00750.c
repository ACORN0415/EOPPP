int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 33;
    int v2 = 21;
    int i;
    v1 = v1 - v2;
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    v1 = v1 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
