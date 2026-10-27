int __arr_814[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 96;
    int v2 = 57;
    int i;
    for (i = 0; i < 10; i++) { __arr_814[i] = v1 + i; }
    v1 = 40;
    v0 = v0 * 8;
    return v0;
}
int main(void) { return test_func(); }
