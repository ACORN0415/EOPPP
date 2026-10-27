int __arr_6635[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 33;
    int v2 = 79;
    int i;
    v2 = 5;
    for (i = 0; i < 10; i++) { __arr_6635[i] = v0 + i; }
    v2 = v2 - v0;
    return v0;
}
int main(void) { return test_func(); }
