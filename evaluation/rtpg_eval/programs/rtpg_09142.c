int __arr_9142[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 20;
    int v2 = 37;
    int v3 = 37;
    int v4 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_9142[i] = v4 + i; }
    for (i = 0; i < 6; i++) {
        v1 = v1 + v0;
    }
    v2 = 78;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
