int __arr_5002[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 61;
    int v2 = 34;
    int i;
    for (i = 0; i < 10; i++) { __arr_5002[i] = v1 + i; }
    if (v0 > v1) { v0 = v1; }
    for (i = 0; i < 10; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
