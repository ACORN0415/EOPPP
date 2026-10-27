int __arr_7093[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 7;
    int v2 = 100;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_7093[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
