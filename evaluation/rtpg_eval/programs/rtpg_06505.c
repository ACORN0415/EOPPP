int __arr_6505[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 9;
    int v2 = 66;
    int i;
    v1 = v1 + v1;
    v1 = v1 * 6;
    for (i = 0; i < 10; i++) { __arr_6505[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
