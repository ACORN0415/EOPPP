int __arr_1632[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 67;
    int v2 = 49;
    int i;
    v2 = v2 - v0;
    v0 = v0 + v2;
    for (i = 0; i < 10; i++) { __arr_1632[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
