int __arr_2019[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 14;
    int v2 = 12;
    int v3 = 45;
    int i;
    v2 = v2 * 2;
    for (i = 0; i < 10; i++) { __arr_2019[i] = v1 + i; }
    v2 = v2 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
