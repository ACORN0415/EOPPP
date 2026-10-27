int __arr_3102[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 43;
    int v2 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_3102[i] = v1 + i; }
    v0 = v0 & v1;
    return v0;
}
int main(void) { return test_func(); }
