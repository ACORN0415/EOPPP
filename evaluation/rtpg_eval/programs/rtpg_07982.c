int __arr_7982[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 36;
    int v2 = 26;
    int v3 = 36;
    int i;
    v2 = v2 - v3;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_7982[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
