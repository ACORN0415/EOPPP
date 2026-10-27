int __arr_4612[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 21;
    int v2 = 93;
    int v3 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_4612[i] = v1 + i; }
    for (i = 0; i < 5; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
