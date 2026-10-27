int __arr_2628[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 49;
    int v2 = 98;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_2628[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
