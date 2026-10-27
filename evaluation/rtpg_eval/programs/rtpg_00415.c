int __arr_415[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 32;
    int v2 = 9;
    int v3 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_415[i] = v0 + i; }
    v2 = v2 - v1;
    v1 = v1 * 2;
    return v0;
}
int main(void) { return test_func(); }
