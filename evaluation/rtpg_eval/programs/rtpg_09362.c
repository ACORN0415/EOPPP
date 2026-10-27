int __arr_9362[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 5;
    int v2 = 22;
    int v3 = 42;
    int i;
    for (i = 0; i < 10; i++) { __arr_9362[i] = v1 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
