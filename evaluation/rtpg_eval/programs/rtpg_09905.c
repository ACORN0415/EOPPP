int __arr_9905[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 54;
    int v2 = 68;
    int v3 = 100;
    int v4 = 23;
    int v5 = 77;
    int v6 = 74;
    int v7 = 82;
    int i;
    v4 = v4 - v3;
    for (i = 0; i < 10; i++) { __arr_9905[i] = v3 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v1 = v1 ^ v0;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
