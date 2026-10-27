int __arr_9707[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 35;
    int v2 = 9;
    int v3 = 62;
    int v4 = 17;
    int i;
    for (i = 0; i < 10; i++) { __arr_9707[i] = v0 + i; }
    v4 = v4 * 4;
    v0 = v0 + v2;
    v2 = v2 - v4;
    return v0;
}
int main(void) { return test_func(); }
