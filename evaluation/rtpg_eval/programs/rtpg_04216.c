int __arr_4216[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 13;
    int v2 = 93;
    int v3 = 85;
    int v4 = 66;
    int v5 = 71;
    int i;
    for (i = 0; i < 10; i++) { __arr_4216[i] = v3 + i; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
