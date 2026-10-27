int __arr_3683[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 85;
    int v2 = 77;
    int v3 = 36;
    int v4 = 26;
    int i;
    v1 = v1 * 9;
    for (i = 0; i < 10; i++) { __arr_3683[i] = v0 + i; }
    for (i = 0; i < 7; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
