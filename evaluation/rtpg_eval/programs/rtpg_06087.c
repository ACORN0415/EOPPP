int __arr_6087[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 81;
    int v2 = 87;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    v2 = v2 * 7;
    for (i = 0; i < 10; i++) { __arr_6087[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
