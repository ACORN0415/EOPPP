int __arr_3160[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 22;
    int v2 = 64;
    int v3 = 15;
    int i;
    for (i = 0; i < 10; i++) { __arr_3160[i] = v0 + i; }
    if (v0 > v3) { v0 = v3; }
    return v0;
}
int main(void) { return test_func(); }
