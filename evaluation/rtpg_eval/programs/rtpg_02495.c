int __arr_2495[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 65;
    int v2 = 16;
    int i;
    v2 = v2 * 8;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v2;
    }
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) { __arr_2495[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
