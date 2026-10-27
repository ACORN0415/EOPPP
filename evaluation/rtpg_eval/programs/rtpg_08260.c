int __arr_8260[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 20;
    int v2 = 17;
    int v3 = 72;
    int v4 = 20;
    int v5 = 75;
    int v6 = 15;
    int i;
    v0 = v0 * 5;
    if (v3 > v6) { v3 = v6; }
    for (i = 0; i < 10; i++) { __arr_8260[i] = v3 + i; }
    return v0;
}
int main(void) { return test_func(); }
