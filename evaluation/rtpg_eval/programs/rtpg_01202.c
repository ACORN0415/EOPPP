int __arr_1202[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 66;
    int v2 = 40;
    int i;
    for (i = 0; i < 10; i++) { __arr_1202[i] = v1 + i; }
    v0 = v0 * 5;
    return v0;
}
int main(void) { return test_func(); }
