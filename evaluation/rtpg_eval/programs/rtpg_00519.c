int __arr_519[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 21;
    int v2 = 47;
    int i;
    for (i = 0; i < 10; i++) { __arr_519[i] = v2 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
