int __arr_5019[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 0;
    int v2 = 47;
    int i;
    for (i = 0; i < 10; i++) { __arr_5019[i] = v1 + i; }
    for (i = 0; i < 14; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
