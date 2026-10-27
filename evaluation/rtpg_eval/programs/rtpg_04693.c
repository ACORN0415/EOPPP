int __arr_4693[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 54;
    int v2 = 9;
    int i;
    v0 = v0 + v0;
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_4693[i] = v0 + i; }
    v0 = v0 * 6;
    return v0;
}
int main(void) { return test_func(); }
