int __arr_7421[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 12;
    int v2 = 42;
    int v3 = 53;
    int v4 = 70;
    int i;
    if (v4 > v3) { v4 = v3; }
    for (i = 0; i < 10; i++) { __arr_7421[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
