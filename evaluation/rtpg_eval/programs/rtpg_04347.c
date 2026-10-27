int __arr_4347[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 49;
    int v2 = 37;
    int v3 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_4347[i] = v1 + i; }
    v2 = v2 - v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
