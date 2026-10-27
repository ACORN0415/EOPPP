int __arr_8898[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 95;
    int v2 = 7;
    int i;
    v2 = v2 * 6;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) { __arr_8898[i] = v1 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
