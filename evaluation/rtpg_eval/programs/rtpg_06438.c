int __arr_6438[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 83;
    int v2 = 37;
    int i;
    v0 = v0 * 10;
    v1 = 36;
    for (i = 0; i < 10; i++) { __arr_6438[i] = v0 + i; }
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }
