int __arr_2572[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 12;
    int v2 = 81;
    int v3 = 64;
    int v4 = 9;
    int v5 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_2572[i] = v3 + i; }
    v4 = v4 + v1;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
