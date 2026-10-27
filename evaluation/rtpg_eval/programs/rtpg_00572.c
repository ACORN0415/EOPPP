int __arr_572[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 29;
    int v2 = 24;
    int v3 = 46;
    int v4 = 76;
    int v5 = 61;
    int v6 = 11;
    int i;
    for (i = 0; i < 10; i++) { __arr_572[i] = v1 + i; }
    v3 = v3 - v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
