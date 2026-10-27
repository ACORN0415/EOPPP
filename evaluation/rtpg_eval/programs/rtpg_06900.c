int __arr_6900[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 24;
    int v2 = 35;
    int v3 = 21;
    int i;
    for (i = 0; i < 10; i++) { __arr_6900[i] = v0 + i; }
    v1 = v1 * 6;
    v1 = v1 - v0;
    return v0;
}
int main(void) { return test_func(); }
