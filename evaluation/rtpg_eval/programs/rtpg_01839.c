int __arr_1839[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 24;
    int v2 = 89;
    int v3 = 44;
    int v4 = 30;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v2;
    }
    v2 = v2 * 3;
    for (i = 0; i < 10; i++) { __arr_1839[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
