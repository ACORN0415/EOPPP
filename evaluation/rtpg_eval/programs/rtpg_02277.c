int __arr_2277[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 19;
    int v2 = 39;
    int v3 = 62;
    int v4 = 65;
    int v5 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_2277[i] = v0 + i; }
    v0 = v0 ^ v3;
    return v0;
}
int main(void) { return test_func(); }
