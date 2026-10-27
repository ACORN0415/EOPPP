int __arr_8461[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 8;
    int v2 = 38;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 10; i++) { __arr_8461[i] = v0 + i; }
    v0 = 52;
    return v0;
}
int main(void) { return test_func(); }
