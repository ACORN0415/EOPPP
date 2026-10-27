int __arr_9291[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 66;
    int v2 = 40;
    int v3 = 63;
    int v4 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_9291[i] = v0 + i; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
