int __arr_835[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 16;
    int v2 = 34;
    int v3 = 58;
    int i;
    v3 = v3 * 6;
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_835[i] = v3 + i; }
    return v0;
}
int main(void) { return test_func(); }
