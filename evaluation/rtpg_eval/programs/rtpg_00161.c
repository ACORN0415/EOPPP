int __arr_161[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 39;
    int v2 = 77;
    int v3 = 17;
    int v4 = 17;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_161[i] = v3 + i; }
    v3 = v3 & v2;
    return v0;
}
int main(void) { return test_func(); }
