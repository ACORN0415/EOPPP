int __arr_269[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 43;
    int v2 = 42;
    int v3 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_269[i] = v3 + i; }
    if (v3 > v2) { v3 = v2; }
    v3 = v3 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
