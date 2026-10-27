int __arr_9848[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 87;
    int v2 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_9848[i] = v2 + i; }
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
