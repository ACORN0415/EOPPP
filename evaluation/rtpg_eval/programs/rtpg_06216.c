int __arr_6216[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 6;
    int v2 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_6216[i] = v2 + i; }
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }
