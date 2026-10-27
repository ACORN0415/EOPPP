int __arr_8601[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 97;
    int v2 = 19;
    int v3 = 95;
    int v4 = 60;
    int v5 = 73;
    int v6 = 23;
    int v7 = 72;
    int i;
    v6 = v6 * 6;
    v4 = v4 - v6;
    for (i = 0; i < 10; i++) { __arr_8601[i] = v6 + i; }
    for (i = 0; i < 6; i++) {
        v7 = v7 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
