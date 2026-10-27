int __arr_5013[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 61;
    int v2 = 93;
    int v3 = 64;
    int v4 = 40;
    int v5 = 24;
    int v6 = 93;
    int v7 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_5013[i] = v0 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
