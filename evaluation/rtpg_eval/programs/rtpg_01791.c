int __arr_1791[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 11;
    int v2 = 81;
    int v3 = 48;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_1791[i] = v0 + i; }
    for (i = 0; i < 14; i++) {
        v0 = v0 + v3;
    }
    v1 = v1 + v1;
    return v0;
}
int main(void) { return test_func(); }
