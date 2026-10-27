int __arr_8019[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 92;
    int v2 = 100;
    int v3 = 23;
    int v4 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_8019[i] = v4 + i; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
