int __arr_2728[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 64;
    int v2 = 31;
    int i;
    v0 = 56;
    for (i = 0; i < 10; i++) { __arr_2728[i] = v2 + i; }
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
