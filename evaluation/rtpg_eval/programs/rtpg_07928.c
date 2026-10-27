int __arr_7928[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 89;
    int v2 = 40;
    int v3 = 35;
    int v4 = 12;
    int i;
    v1 = 56;
    for (i = 0; i < 10; i++) { __arr_7928[i] = v1 + i; }
    for (i = 0; i < 9; i++) {
        v0 = v0 + v4;
    }
    v3 = v3 * 10;
    return v0;
}
int main(void) { return test_func(); }
