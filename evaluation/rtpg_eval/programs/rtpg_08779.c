int __arr_8779[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 58;
    int v2 = 72;
    int v3 = 22;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 * 6;
    for (i = 0; i < 10; i++) { __arr_8779[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
