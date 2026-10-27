int __arr_7046[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 88;
    int v2 = 15;
    int v3 = 55;
    int v4 = 58;
    int v5 = 50;
    int v6 = 8;
    int i;
    for (i = 0; i < 10; i++) { __arr_7046[i] = v4 + i; }
    v0 = v0 - v3;
    v1 = v1 + v6;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
