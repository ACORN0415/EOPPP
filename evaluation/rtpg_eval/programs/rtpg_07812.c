int __arr_7812[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 12;
    int v2 = 51;
    int i;
    v1 = v1 - v0;
    v1 = v1 * 9;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_7812[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
