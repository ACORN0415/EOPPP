int __arr_6576[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 44;
    int v2 = 24;
    int v3 = 72;
    int i;
    v3 = v3 + v1;
    for (i = 0; i < 10; i++) { __arr_6576[i] = v3 + i; }
    return v0;
}
int main(void) { return test_func(); }
