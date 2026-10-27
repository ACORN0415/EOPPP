int __arr_4662[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 3;
    int v2 = 31;
    int v3 = 81;
    int v4 = 0;
    int v5 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_4662[i] = v0 + i; }
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 7; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
