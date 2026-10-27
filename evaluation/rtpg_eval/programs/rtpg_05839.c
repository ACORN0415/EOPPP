int __arr_5839[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 51;
    int v2 = 23;
    int i;
    v1 = v1 * 7;
    for (i = 0; i < 10; i++) { __arr_5839[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }
