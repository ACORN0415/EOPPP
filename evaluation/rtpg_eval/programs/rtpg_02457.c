int test_func(void) {
    int v0 = 100;
    int v1 = 5;
    int v2 = 71;
    int i;
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
