int __arr_4373[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 32;
    int v2 = 69;
    int v3 = 64;
    int v4 = 71;
    int v5 = 99;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v5;
    }
    if (v5 > v0) { v5 = v0; }
    for (i = 0; i < 10; i++) { __arr_4373[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
