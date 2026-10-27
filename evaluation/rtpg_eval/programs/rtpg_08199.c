int __arr_8199[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 84;
    int v2 = 82;
    int v3 = 18;
    int i;
    v2 = v2 - v3;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v0;
    }
    v3 = v3 * 7;
    for (i = 0; i < 10; i++) { __arr_8199[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
