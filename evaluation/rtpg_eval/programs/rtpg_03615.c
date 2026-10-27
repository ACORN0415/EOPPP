int __arr_3615[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 77;
    int v2 = 11;
    int i;
    v2 = 2;
    v0 = v0 + v1;
    for (i = 0; i < 10; i++) { __arr_3615[i] = v0 + i; }
    v0 = v0 * 10;
    return v0;
}
int main(void) { return test_func(); }
