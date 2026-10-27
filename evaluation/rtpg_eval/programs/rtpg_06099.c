int __arr_6099[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 72;
    int v2 = 52;
    int v3 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_6099[i] = v2 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
