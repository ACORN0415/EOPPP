int __arr_8500[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 83;
    int v2 = 85;
    int v3 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_8500[i] = v3 + i; }
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
