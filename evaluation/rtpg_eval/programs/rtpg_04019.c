int __arr_4019[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 49;
    int v2 = 95;
    int v3 = 8;
    int i;
    v2 = v2 + v1;
    v0 = v0 * 7;
    for (i = 0; i < 10; i++) { __arr_4019[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
