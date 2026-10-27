int __arr_3123[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 91;
    int v2 = 40;
    int v3 = 17;
    int v4 = 89;
    int v5 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_3123[i] = v3 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
