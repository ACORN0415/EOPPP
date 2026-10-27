int __arr_1162[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 26;
    int v2 = 25;
    int v3 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_1162[i] = v2 + i; }
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
