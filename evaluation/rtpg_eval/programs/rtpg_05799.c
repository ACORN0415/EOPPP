int __arr_5799[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 13;
    int v2 = 74;
    int i;
    v2 = v2 - v0;
    v0 = v0 * 2;
    for (i = 0; i < 10; i++) { __arr_5799[i] = v1 + i; }
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
