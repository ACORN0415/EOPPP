int __arr_8675[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 68;
    int v2 = 66;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    v1 = v1 * 3;
    for (i = 0; i < 10; i++) { __arr_8675[i] = v0 + i; }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
