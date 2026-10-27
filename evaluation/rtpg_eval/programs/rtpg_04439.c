int __arr_4439[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 60;
    int v2 = 99;
    int i;
    v0 = 76;
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) { __arr_4439[i] = v0 + i; }
    v2 = v2 | v0;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
