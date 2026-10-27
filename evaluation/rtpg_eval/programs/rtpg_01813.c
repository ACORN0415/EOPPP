int __arr_1813[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 63;
    int v2 = 39;
    int i;
    v0 = v0 + v2;
    v2 = v2 * 10;
    for (i = 0; i < 10; i++) { __arr_1813[i] = v0 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
