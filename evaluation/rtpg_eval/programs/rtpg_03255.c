int __arr_3255[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 60;
    int v2 = 87;
    int v3 = 1;
    int v4 = 48;
    int v5 = 43;
    int v6 = 14;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_3255[i] = v0 + i; }
    v4 = 97;
    return v0;
}
int main(void) { return test_func(); }
