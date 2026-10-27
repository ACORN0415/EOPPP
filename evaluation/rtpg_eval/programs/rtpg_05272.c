int __arr_5272[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 8;
    int v2 = 11;
    int v3 = 19;
    int v4 = 100;
    int v5 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_5272[i] = v0 + i; }
    v5 = v5 % (v2 + 1);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
