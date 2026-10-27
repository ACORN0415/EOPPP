int __arr_8808[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 60;
    int v2 = 22;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_8808[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
