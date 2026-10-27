int __arr_7604[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 78;
    int v2 = 88;
    int v3 = 20;
    int v4 = 84;
    int v5 = 65;
    int v6 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_7604[i] = v2 + i; }
    v2 = v2 * 6;
    v3 = v3 - v2;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
