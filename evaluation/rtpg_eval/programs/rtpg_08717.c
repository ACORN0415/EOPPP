int __arr_8717[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 27;
    int v2 = 43;
    int i;
    for (i = 0; i < 10; i++) { __arr_8717[i] = v2 + i; }
    v2 = 75;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
