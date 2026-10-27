int __arr_5861[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 96;
    int v2 = 19;
    int v3 = 21;
    int i;
    if (v3 > v1) { v3 = v1; }
    v3 = v3 * 8;
    for (i = 0; i < 10; i++) { __arr_5861[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
