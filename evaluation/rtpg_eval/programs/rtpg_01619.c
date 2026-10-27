int __arr_1619[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 25;
    int v2 = 28;
    int v3 = 54;
    int i;
    for (i = 0; i < 10; i++) { __arr_1619[i] = v0 + i; }
    v0 = 97;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
