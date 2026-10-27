int __arr_517[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 30;
    int v2 = 14;
    int v3 = 79;
    int v4 = 8;
    int v5 = 33;
    int i;
    v2 = 38;
    for (i = 0; i < 10; i++) { __arr_517[i] = v0 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
