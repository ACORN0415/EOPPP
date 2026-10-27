int __arr_1667[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 86;
    int v2 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_1667[i] = v2 + i; }
    for (i = 0; i < 11; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
