int __arr_6965[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 50;
    int v2 = 57;
    int i;
    for (i = 0; i < 10; i++) { __arr_6965[i] = v2 + i; }
    if (v0 > v2) { v0 = v2; }
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
