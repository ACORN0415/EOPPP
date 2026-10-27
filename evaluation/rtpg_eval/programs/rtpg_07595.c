int __arr_7595[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 25;
    int v2 = 25;
    int v3 = 36;
    int v4 = 58;
    int v5 = 57;
    int v6 = 46;
    int v7 = 0;
    int i;
    if (v6 > v4) { v6 = v4; }
    for (i = 0; i < 10; i++) { __arr_7595[i] = v1 + i; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
