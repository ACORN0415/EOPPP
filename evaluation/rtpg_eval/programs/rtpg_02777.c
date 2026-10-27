int __arr_2777[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 71;
    int v2 = 91;
    int v3 = 74;
    int v4 = 41;
    int i;
    for (i = 0; i < 10; i++) { __arr_2777[i] = v1 + i; }
    v3 = v3 ^ v0;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
