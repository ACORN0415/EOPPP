int __arr_6917[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 30;
    int v2 = 21;
    int i;
    v1 = 75;
    for (i = 0; i < 10; i++) { __arr_6917[i] = v0 + i; }
    for (i = 0; i < 9; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
