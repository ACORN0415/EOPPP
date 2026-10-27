int __arr_2554[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 20;
    int v2 = 8;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 10; i++) { __arr_2554[i] = v2 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
