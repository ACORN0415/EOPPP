int __arr_3012[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 29;
    int v2 = 58;
    int v3 = 2;
    int v4 = 99;
    int i;
    if (v0 > v1) { v0 = v1; }
    v0 = 74;
    for (i = 0; i < 10; i++) { __arr_3012[i] = v0 + i; }
    v4 = v4 + v0;
    return v0;
}
int main(void) { return test_func(); }
