int __arr_4137[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 5;
    int v2 = 51;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_4137[i] = v1 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
