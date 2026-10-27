int __arr_1949[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 26;
    int v2 = 14;
    int v3 = 76;
    int i;
    for (i = 0; i < 10; i++) { __arr_1949[i] = v0 + i; }
    v3 = v3 + v3;
    v3 = v3 - v0;
    return v0;
}
int main(void) { return test_func(); }
