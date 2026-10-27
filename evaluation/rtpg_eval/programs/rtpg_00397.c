int __arr_397[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 38;
    int v2 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_397[i] = v1 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
