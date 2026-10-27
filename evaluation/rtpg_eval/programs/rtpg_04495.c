int __arr_4495[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 91;
    int v2 = 19;
    int i;
    for (i = 0; i < 10; i++) { __arr_4495[i] = v2 + i; }
    v2 = v2 - v1;
    return v0;
}
int main(void) { return test_func(); }
