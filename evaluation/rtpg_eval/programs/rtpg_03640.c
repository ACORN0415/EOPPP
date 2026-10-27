int __arr_3640[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 30;
    int v2 = 7;
    int v3 = 59;
    int v4 = 72;
    int v5 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_3640[i] = v1 + i; }
    v0 = v0 * 7;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
