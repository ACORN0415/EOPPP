int __arr_8249[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 30;
    int v2 = 32;
    int v3 = 61;
    int v4 = 59;
    int i;
    v3 = v3 + v3;
    for (i = 0; i < 10; i++) { __arr_8249[i] = v4 + i; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
