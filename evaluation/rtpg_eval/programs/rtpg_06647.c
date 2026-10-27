int __arr_6647[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 33;
    int v2 = 60;
    int i;
    v0 = 44;
    v2 = v2 + v0;
    for (i = 0; i < 10; i++) { __arr_6647[i] = v1 + i; }
    v2 = v2 * 5;
    return v0;
}
int main(void) { return test_func(); }
