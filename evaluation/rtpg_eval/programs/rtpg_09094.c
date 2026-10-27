int __arr_9094[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 51;
    int v2 = 79;
    int v3 = 55;
    int v4 = 23;
    int v5 = 47;
    int v6 = 68;
    int v7 = 76;
    int i;
    for (i = 0; i < 6; i++) {
        v6 = v6 + v6;
    }
    v1 = 44;
    for (i = 0; i < 10; i++) { __arr_9094[i] = v4 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
