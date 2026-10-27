int __arr_3562[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 22;
    int v2 = 13;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_3562[i] = v0 + i; }
    v0 = v0 - v2;
    v2 = 72;
    return v0;
}
int main(void) { return test_func(); }
