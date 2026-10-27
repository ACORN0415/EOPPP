int __arr_1690[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 3;
    int v2 = 82;
    int v3 = 33;
    int v4 = 26;
    int v5 = 66;
    int v6 = 47;
    int v7 = 74;
    int i;
    v2 = v2 + v6;
    for (i = 0; i < 10; i++) { __arr_1690[i] = v4 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
