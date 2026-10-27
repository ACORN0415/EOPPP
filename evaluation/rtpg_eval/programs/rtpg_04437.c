int __arr_4437[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 15;
    int v2 = 40;
    int v3 = 35;
    int v4 = 91;
    int v5 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_4437[i] = v1 + i; }
    v2 = v2 - v3;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
