int __arr_512[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 97;
    int v2 = 22;
    int v3 = 9;
    int v4 = 47;
    int v5 = 49;
    int v6 = 65;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    v2 = v2 - v5;
    for (i = 0; i < 10; i++) { __arr_512[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
