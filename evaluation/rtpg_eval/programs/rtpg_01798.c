int __arr_1798[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 69;
    int v2 = 74;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_1798[i] = v2 + i; }
    v1 = v1 + v1;
    return v0;
}
int main(void) { return test_func(); }
