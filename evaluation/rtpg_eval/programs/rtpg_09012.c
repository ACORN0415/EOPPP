int __arr_9012[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 71;
    int v2 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_9012[i] = v1 + i; }
    v1 = v1 * 5;
    return v0;
}
int main(void) { return test_func(); }
