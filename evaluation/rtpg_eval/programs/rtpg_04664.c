int __arr_4664[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 72;
    int v2 = 66;
    int v3 = 80;
    int v4 = 16;
    int v5 = 90;
    int v6 = 92;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_4664[i] = v2 + i; }
    v3 = v3 + v0;
    return v0;
}
int main(void) { return test_func(); }
