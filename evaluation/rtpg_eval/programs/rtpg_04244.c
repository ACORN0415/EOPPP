int __arr_4244[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 23;
    int v2 = 8;
    int i;
    for (i = 0; i < 10; i++) { __arr_4244[i] = v2 + i; }
    v1 = v1 * 10;
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
