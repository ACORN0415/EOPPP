int __arr_2224[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 73;
    int v2 = 17;
    int v3 = 14;
    int v4 = 63;
    int v5 = 22;
    int v6 = 98;
    int i;
    if (v5 > v1) { v5 = v1; }
    for (i = 0; i < 10; i++) { __arr_2224[i] = v6 + i; }
    v6 = v6 * 3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v3 = v3 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
