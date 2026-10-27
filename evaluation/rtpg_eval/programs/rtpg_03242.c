int __arr_3242[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 9;
    int v2 = 11;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_3242[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
