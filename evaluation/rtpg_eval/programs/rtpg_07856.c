int __arr_7856[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 58;
    int v2 = 10;
    int i;
    for (i = 0; i < 10; i++) { __arr_7856[i] = v0 + i; }
    for (i = 0; i < 10; i++) {
        v1 = v1 + v2;
    }
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
