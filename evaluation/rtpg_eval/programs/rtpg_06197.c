int __arr_6197[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 74;
    int v2 = 23;
    int v3 = 72;
    int i;
    v1 = 49;
    v0 = v0 - v2;
    for (i = 0; i < 10; i++) { __arr_6197[i] = v1 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
