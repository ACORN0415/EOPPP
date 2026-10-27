int __arr_307[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 94;
    int v2 = 100;
    int v3 = 18;
    int i;
    v2 = 9;
    for (i = 0; i < 10; i++) { __arr_307[i] = v1 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
