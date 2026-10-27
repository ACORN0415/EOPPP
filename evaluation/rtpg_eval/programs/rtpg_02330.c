int __arr_2330[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 17;
    int v2 = 82;
    int v3 = 1;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 10; i++) { __arr_2330[i] = v2 + i; }
    v3 = v3 * 10;
    return v0;
}
int main(void) { return test_func(); }
