int __arr_3918[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 49;
    int v2 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_3918[i] = v0 + i; }
    v1 = 23;
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
