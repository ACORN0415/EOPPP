int __arr_7187[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 27;
    int v2 = 25;
    int v3 = 65;
    int v4 = 34;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_7187[i] = v4 + i; }
    v1 = v1 * 4;
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
