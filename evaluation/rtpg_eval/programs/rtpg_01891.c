int __arr_1891[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 72;
    int v2 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_1891[i] = v2 + i; }
    v1 = v1 - v0;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
