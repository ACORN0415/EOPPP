int __arr_1774[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 45;
    int v2 = 11;
    int v3 = 69;
    int i;
    for (i = 0; i < 10; i++) { __arr_1774[i] = v1 + i; }
    v1 = v1 * 6;
    return v0;
}
int main(void) { return test_func(); }
