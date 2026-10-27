int __arr_4653[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 98;
    int v2 = 65;
    int v3 = 46;
    int v4 = 53;
    int v5 = 11;
    int i;
    v4 = v4 + v5;
    for (i = 0; i < 10; i++) { __arr_4653[i] = v0 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
