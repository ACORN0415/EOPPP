int __arr_5470[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 47;
    int v2 = 48;
    int v3 = 96;
    int v4 = 72;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 10; i++) { __arr_5470[i] = v1 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
