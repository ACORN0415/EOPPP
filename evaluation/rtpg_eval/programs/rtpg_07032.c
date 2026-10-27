int __arr_7032[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 35;
    int v2 = 84;
    int v3 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_7032[i] = v0 + i; }
    if (v3 > v2) { v3 = v2; }
    v3 = v3 + v1;
    return v0;
}
int main(void) { return test_func(); }
