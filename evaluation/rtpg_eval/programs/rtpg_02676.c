int __arr_2676[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 81;
    int v2 = 75;
    int v3 = 80;
    int v4 = 26;
    int v5 = 13;
    int v6 = 59;
    int v7 = 55;
    int i;
    v7 = v7 + v1;
    for (i = 0; i < 20; i++) {
        v7 = v7 + v6;
    }
    for (i = 0; i < 10; i++) { __arr_2676[i] = v0 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
