int __arr_8089[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 72;
    int v2 = 84;
    int i;
    v2 = 70;
    v0 = v0 * 2;
    for (i = 0; i < 10; i++) { __arr_8089[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
