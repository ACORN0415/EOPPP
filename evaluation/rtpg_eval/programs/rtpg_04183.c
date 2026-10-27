int __arr_4183[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 48;
    int v2 = 40;
    int i;
    for (i = 0; i < 10; i++) { __arr_4183[i] = v0 + i; }
    v1 = v1 + v1;
    return v0;
}
int main(void) { return test_func(); }
