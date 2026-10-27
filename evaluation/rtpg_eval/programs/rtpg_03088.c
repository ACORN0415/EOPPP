int __arr_3088[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 37;
    int v2 = 22;
    int v3 = 30;
    int i;
    v0 = v0 + v0;
    v0 = v0 - v3;
    v1 = v1 * 4;
    for (i = 0; i < 10; i++) { __arr_3088[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
