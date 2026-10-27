int __arr_9385[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 69;
    int v2 = 64;
    int i;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 + v0;
    for (i = 0; i < 10; i++) { __arr_9385[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
