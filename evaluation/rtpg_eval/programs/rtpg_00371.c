int __arr_371[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 69;
    int v2 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_371[i] = v0 + i; }
    for (i = 0; i < 8; i++) {
        v2 = v2 + v2;
    }
    v1 = 90;
    return v0;
}
int main(void) { return test_func(); }
