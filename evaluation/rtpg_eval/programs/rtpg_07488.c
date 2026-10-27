int __arr_7488[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 59;
    int v2 = 80;
    int v3 = 22;
    int v4 = 43;
    int v5 = 44;
    int v6 = 76;
    int v7 = 11;
    int i;
    v4 = v4 + v2;
    for (i = 0; i < 10; i++) { __arr_7488[i] = v3 + i; }
    v3 = v3 % (v0 + 1);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
