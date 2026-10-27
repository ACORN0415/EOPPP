int __arr_8885[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 39;
    int v2 = 100;
    int i;
    v0 = 70;
    v2 = v2 * 6;
    v2 = v2 - v0;
    for (i = 0; i < 10; i++) { __arr_8885[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }
