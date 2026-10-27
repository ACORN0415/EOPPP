int __arr_3172[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 52;
    int v2 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_3172[i] = v1 + i; }
    v0 = 99;
    v0 = v0 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
