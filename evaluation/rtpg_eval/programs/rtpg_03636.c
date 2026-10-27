int __arr_3636[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 52;
    int v2 = 79;
    int i;
    v2 = v2 * 9;
    for (i = 0; i < 10; i++) { __arr_3636[i] = v0 + i; }
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
