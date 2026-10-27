int __arr_1943[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 85;
    int v2 = 85;
    int v3 = 19;
    int v4 = 27;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 10; i++) { __arr_1943[i] = v2 + i; }
    v4 = __arr_didx[__idx_didx[0]];
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
