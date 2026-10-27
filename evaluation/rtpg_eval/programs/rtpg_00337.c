int __arr_337[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 24;
    int v2 = 50;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = 82;
    for (i = 0; i < 10; i++) { __arr_337[i] = v1 + i; }
    v1 = v1 - v0;
    return v0;
}
int main(void) { return test_func(); }
