int __arr_2323[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 81;
    int v2 = 66;
    int i;
    if (v0 > v2) { v0 = v2; }
    v2 = v2 * 9;
    for (i = 0; i < 10; i++) { __arr_2323[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
