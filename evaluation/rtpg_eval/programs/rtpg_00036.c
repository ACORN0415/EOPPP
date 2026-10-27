int __arr_36[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 4;
    int v2 = 36;
    int i;
    for (i = 0; i < 10; i++) { __arr_36[i] = v0 + i; }
    v1 = 36;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
