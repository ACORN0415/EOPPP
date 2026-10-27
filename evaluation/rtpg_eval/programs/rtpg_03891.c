int __arr_3891[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 11;
    int v2 = 91;
    int v3 = 7;
    int v4 = 5;
    int i;
    for (i = 0; i < 10; i++) { __arr_3891[i] = v1 + i; }
    v0 = v0 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
