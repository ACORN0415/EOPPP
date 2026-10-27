int __arr_7443[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 91;
    int v2 = 90;
    int i;
    v0 = v0 * 7;
    for (i = 0; i < 10; i++) { __arr_7443[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
