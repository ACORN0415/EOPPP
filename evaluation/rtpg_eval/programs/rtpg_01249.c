int __arr_1249[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 88;
    int v2 = 92;
    int i;
    if (v2 > v0) { v2 = v0; }
    v0 = v0 * 10;
    for (i = 0; i < 10; i++) { __arr_1249[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
