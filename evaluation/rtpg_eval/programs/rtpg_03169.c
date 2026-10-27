int __arr_3169[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 31;
    int v2 = 39;
    int v3 = 18;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 10; i++) { __arr_3169[i] = v0 + i; }
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }
