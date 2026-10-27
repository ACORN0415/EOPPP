int __arr_4039[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 10;
    int v2 = 50;
    int v3 = 18;
    int v4 = 50;
    int i;
    v0 = v0 + v1;
    v1 = v1 * 10;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 10; i++) { __arr_4039[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
