int __arr_9156[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 7;
    int v2 = 13;
    int i;
    for (i = 0; i < 10; i++) { __arr_9156[i] = v1 + i; }
    v2 = v2 * 5;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
