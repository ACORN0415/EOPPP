int __arr_1590[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 14;
    int v2 = 14;
    int v3 = 51;
    int v4 = 9;
    int i;
    v3 = v3 + v1;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 10; i++) { __arr_1590[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
