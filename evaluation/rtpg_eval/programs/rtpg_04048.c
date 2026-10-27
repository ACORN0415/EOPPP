int __arr_4048[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 99;
    int v2 = 21;
    int v3 = 11;
    int v4 = 70;
    int v5 = 27;
    int i;
    v2 = 99;
    for (i = 0; i < 10; i++) { __arr_4048[i] = v2 + i; }
    if (v5 > v2) { v5 = v2; }
    return v0;
}
int main(void) { return test_func(); }
