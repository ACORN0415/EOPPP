int __arr_545[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 14;
    int v2 = 48;
    int v3 = 28;
    int i;
    v2 = 48;
    for (i = 0; i < 10; i++) { __arr_545[i] = v0 + i; }
    v2 = v2 + v1;
    v2 = v2 | v3;
    return v0;
}
int main(void) { return test_func(); }
