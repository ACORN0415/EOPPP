int __arr_7579[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 38;
    int v2 = 94;
    int v3 = 43;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_7579[i] = v0 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
