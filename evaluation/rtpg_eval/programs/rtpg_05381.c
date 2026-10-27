int __arr_5381[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 46;
    int v2 = 82;
    int v3 = 54;
    int v4 = 37;
    int v5 = 93;
    int v6 = 69;
    int i;
    v5 = 64;
    for (i = 0; i < 10; i++) { __arr_5381[i] = v2 + i; }
    v3 = v3 * 3;
    v2 = v2 + v5;
    return v0;
}
int main(void) { return test_func(); }
