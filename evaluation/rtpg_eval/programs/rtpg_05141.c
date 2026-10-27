int __arr_5141[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 39;
    int v2 = 14;
    int v3 = 22;
    int v4 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_5141[i] = v4 + i; }
    v1 = v1 + v2;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
