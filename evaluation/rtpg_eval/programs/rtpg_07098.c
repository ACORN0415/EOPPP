int __arr_7098[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 48;
    int v2 = 30;
    int i;
    for (i = 0; i < 10; i++) { __arr_7098[i] = v1 + i; }
    v1 = v1 * 4;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
