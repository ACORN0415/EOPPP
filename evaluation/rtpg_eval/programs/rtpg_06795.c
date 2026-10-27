int __arr_6795[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 19;
    int v2 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_6795[i] = v1 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
