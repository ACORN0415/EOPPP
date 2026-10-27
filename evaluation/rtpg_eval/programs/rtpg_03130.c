int __arr_3130[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 71;
    int v2 = 83;
    int i;
    v0 = 76;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_3130[i] = v1 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v1 = v1 & v2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
