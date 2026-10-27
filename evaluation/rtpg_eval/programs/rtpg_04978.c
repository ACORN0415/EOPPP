int __arr_4978[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 68;
    int v2 = 37;
    int v3 = 51;
    int v4 = 42;
    int v5 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_4978[i] = v1 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
