int __arr_7422[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 16;
    int v2 = 39;
    int i;
    v0 = 93;
    v2 = v2 + v0;
    for (i = 0; i < 10; i++) { __arr_7422[i] = v0 + i; }
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
