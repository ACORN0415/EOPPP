int __arr_2105[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 44;
    int v2 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_2105[i] = v2 + i; }
    v1 = 43;
    return v0;
}
int main(void) { return test_func(); }
