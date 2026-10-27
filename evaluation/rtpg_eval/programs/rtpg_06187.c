int __arr_6187[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 93;
    int v2 = 37;
    int v3 = 33;
    int v4 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_6187[i] = v4 + i; }
    for (i = 0; i < 16; i++) {
        v4 = v4 + v2;
    }
    v3 = v3 + v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
