int __arr_9450[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 64;
    int v2 = 18;
    int i;
    v2 = 20;
    for (i = 0; i < 10; i++) { __arr_9450[i] = v1 + i; }
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
