int __arr_6150[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 54;
    int v2 = 82;
    int i;
    if (v0 > v1) { v0 = v1; }
    for (i = 0; i < 10; i++) { __arr_6150[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
