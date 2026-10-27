int __arr_4184[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 15;
    int v2 = 6;
    int v3 = 43;
    int i;
    if (v0 > v1) { v0 = v1; }
    for (i = 0; i < 10; i++) { __arr_4184[i] = v0 + i; }
    v2 = v2 & v1;
    return v0;
}
int main(void) { return test_func(); }
