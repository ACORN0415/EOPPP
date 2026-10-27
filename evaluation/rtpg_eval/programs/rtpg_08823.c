int __arr_8823[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 84;
    int v2 = 9;
    int v3 = 82;
    int v4 = 5;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_8823[i] = v2 + i; }
    v1 = v1 * 8;
    return v0;
}
int main(void) { return test_func(); }
