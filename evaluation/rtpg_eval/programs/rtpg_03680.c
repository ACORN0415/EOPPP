int __arr_3680[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 100;
    int v2 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_3680[i] = v2 + i; }
    v0 = 14;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
