int __arr_7030[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 57;
    int v2 = 59;
    int v3 = 1;
    int v4 = 8;
    int v5 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_7030[i] = v0 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
