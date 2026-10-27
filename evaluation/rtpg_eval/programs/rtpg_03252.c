int __arr_3252[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 25;
    int v2 = 70;
    int i;
    v0 = v0 + v0;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 10; i++) { __arr_3252[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
