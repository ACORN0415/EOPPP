int __arr_103[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 8;
    int v2 = 23;
    int v3 = 90;
    int v4 = 86;
    int v5 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_103[i] = v4 + i; }
    v2 = v2 * 10;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
