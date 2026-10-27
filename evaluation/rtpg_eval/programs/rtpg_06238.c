int __arr_6238[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 95;
    int v2 = 27;
    int i;
    for (i = 0; i < 10; i++) { __arr_6238[i] = v1 + i; }
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
