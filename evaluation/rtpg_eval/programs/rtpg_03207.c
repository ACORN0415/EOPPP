int __arr_3207[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 69;
    int v2 = 54;
    int v3 = 83;
    int i;
    v0 = 0;
    for (i = 0; i < 10; i++) { __arr_3207[i] = v1 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
