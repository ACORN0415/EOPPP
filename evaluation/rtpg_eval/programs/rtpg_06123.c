int __arr_6123[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 24;
    int v2 = 61;
    int i;
    for (i = 0; i < 10; i++) { __arr_6123[i] = v2 + i; }
    v1 = v1 - v0;
    v1 = v1 + v1;
    return v0;
}
int main(void) { return test_func(); }
