int __arr_4522[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 29;
    int v2 = 4;
    int i;
    v0 = 6;
    for (i = 0; i < 10; i++) { __arr_4522[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
