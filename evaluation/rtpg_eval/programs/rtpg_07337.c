int __arr_7337[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 11;
    int v2 = 63;
    int v3 = 25;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_7337[i] = v2 + i; }
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
