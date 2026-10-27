int __arr_4192[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 1;
    int v2 = 10;
    int i;
    for (i = 0; i < 10; i++) { __arr_4192[i] = v1 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
