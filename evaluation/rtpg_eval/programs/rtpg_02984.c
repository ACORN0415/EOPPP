int __arr_2984[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 55;
    int v2 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_2984[i] = v2 + i; }
    v0 = 94;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
