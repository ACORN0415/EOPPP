int __arr_4379[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 42;
    int v2 = 3;
    int v3 = 24;
    int v4 = 52;
    int v5 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_4379[i] = v5 + i; }
    v2 = v2 * 7;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
