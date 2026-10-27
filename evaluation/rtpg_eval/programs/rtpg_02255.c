int __arr_2255[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 53;
    int v2 = 38;
    int v3 = 67;
    int v4 = 29;
    int v5 = 18;
    int v6 = 76;
    int i;
    v1 = v1 * 6;
    v6 = v6 - v1;
    for (i = 0; i < 12; i++) {
        v6 = v6 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_2255[i] = v5 + i; }
    return v0;
}
int main(void) { return test_func(); }
