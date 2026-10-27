int __arr_1696[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 99;
    int v2 = 58;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    v1 = 40;
    for (i = 0; i < 10; i++) { __arr_1696[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
