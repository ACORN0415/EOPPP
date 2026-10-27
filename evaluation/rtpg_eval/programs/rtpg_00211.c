int __arr_211[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 92;
    int v2 = 33;
    int v3 = 55;
    int v4 = 80;
    int v5 = 51;
    int v6 = 14;
    int v7 = 41;
    int i;
    for (i = 0; i < 10; i++) { __arr_211[i] = v6 + i; }
    v7 = v7 - v2;
    v4 = v4 & v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
